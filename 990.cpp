#include <bits/stdc++.h>
using namespace std;
bool f[35];
int t, w, n, d[35], g[35];
int dp[35][1005];
int getMax(int p, int sum)
{
    int &ret = dp[p][sum];
    if (ret != -1)
        return ret;
    if (p >= n)
        return ret = 0;
    int ret1 = getMax(p + 1, sum);
    int ret2 = 0;
    if (sum + 3 * w * d[p] <= t)
        ret2 = getMax(p + 1, sum + 3 * w * d[p]) + g[p];
    return ret = max(ret1, ret2);
}
int main()
{
    bool blank = 0;
    while (cin >> t >> w)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> d[i] >> g[i];
        if (blank)
            puts("");
        blank = 1;
        memset(dp, -1, sizeof dp);
        int ans = getMax(0, 0);
        cout << ans << endl;
        int cost = 0, cnt = 0;
        memset(f, 0, sizeof f);
        for (int i = 0; i < n; i++)
            if (dp[i][cost] != dp[i + 1][cost])
                cnt++, f[i] = 1, cost += 3 * w * d[i];
        cout << cnt << endl;
        for (int i = 0; i < n; i++)
            if (f[i])
                cout << d[i] << " " << g[i] << endl;
    }
    return 0;
}
