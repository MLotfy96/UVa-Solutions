#include <bits/stdc++.h>
using namespace std;
const int OO = 50050;
int n, g, p[1005], w[1005], mw;
int dp[1005][35];
int solve(int i, int sum)
{
    int &ret = dp[i][sum];
    if (ret != -1)
        return ret;
    if (i >= n)
        return 0;
    int ret1 = solve(i + 1, sum);
    int ret2 = 0;
    if (w[i] + sum <= mw)
        ret2 = solve(i + 1, sum + w[i]) + p[i];
    return ret = max(ret1, ret2);
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> p[i] >> w[i];
        cin >> g;
        for (int i = 0; i < g; i++)
            cin >> mw, memset(dp, -1, sizeof dp), ans += solve(0, 0);
        cout << ans << endl;
    }
    return 0;
}
