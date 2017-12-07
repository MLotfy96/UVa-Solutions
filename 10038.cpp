#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int x[n], a[n], sum = 0;
        memset(a, 1, sizeof a);
        a[0] = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
            if (i)
            {
                a[abs(x[i] - x[i - 1])] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        if (sum)
            cout << "Not jolly" << endl;
        else
            cout << "Jolly" << endl;
    }
    return 0;
}
