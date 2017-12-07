#include <bits/stdc++.h>
using namespace std;
int MIN_LEAF;
int power(int x, int p)
{
    if (p == 0)
        return 1;
    return x * power(x, p - 1);
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int d, n, x, f;
        cin >> d >> n;
        MIN_LEAF = power(2, d - 1);
        x = 1;
        while (x < MIN_LEAF)
        {
            if (n % 2)
                x = x * 2;
            else
                x = x * 2 + 1;
            n = ceil(n / 2.0);
        }
        cout << x << endl;
    }
    cin >> tc;
    return 0;
}
