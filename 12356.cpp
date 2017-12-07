#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, b;
    cin >> s >> b;
    while (s != 0 && b != 0)
    {
        int a[s + 2], l, r;
        memset(a, 0, sizeof a);
        while (b--)
        {
            int i;
            cin >> l >> r;
            a[l] = r - l + 1;
            a[r] = r - l + 1;
            if (a[r + 1] == 1)
                a[r + 1] += a[r], a[l]++, r++;
            else if (a[r + 1] != 0)
                a[r + a[r + 1]] += a[r], a[l] += a[r + 1], r += a[r + 1];
            if (a[l - 1] == 1)
                a[l - 1] += a[l], a[r]++, l--;
            else if (a[l - 1] != 0)
                a[l - a[l - 1]] += a[l], a[r] += a[l - 1], l -= a[l - 1];
            for (i = l - 1; i >= 1; i--)
            {
                if (a[i] != 0)
                    i = i - a[i] + 1;
                else
                {
                    cout << i << " ";
                    break;
                }
            }
            if (i < 1)
                cout << "* ";
            for (i = r + 1; i <= s; i++)
            {
                if (a[i] != 0)
                    i = i + a[i] - 1;
                else
                {
                    cout << i << endl;
                    break;
                }
            }
            if (i > s)
                cout << "*" << endl;
        }
        cout << "-" << endl;
        cin >> s >> b;
    }
    return 0;
}
