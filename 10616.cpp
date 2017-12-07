#include <bits/stdc++.h>
using namespace std;
int n, q, d, m;
int a[205];
long long dp[205][25][15];
long long getCount(int p, int mod, int rem)
{
    if (rem == 0)
        if (mod == 0)
            return 1;
        else
            return 0;
    if (p == n)
        return 0;
    long long &ret = dp[p][mod][rem];
    if (ret != -1)
        return ret;
    ret = getCount(p + 1, mod, rem);
    if (rem)
        ret += getCount(p + 1, ((mod + a[p]) % d + d) % d, rem - 1);
    return ret;
}
int main()
{
    int tc = 1;
    cin >> n >> q;
    while (n || q)
    {
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << "SET " << tc++ << ":\n";
        for (int i = 1; i <= q; i++)
        {
            cin >> d >> m;
            memset(dp, -1, sizeof dp);
            cout << "QUERY " << i << ": " << getCount(0, 0, m) << "\n";
        }
        cin >> n >> q;
    }
    return 0;
}
