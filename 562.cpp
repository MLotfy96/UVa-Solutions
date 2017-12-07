#include <bits/stdc++.h>
using namespace std;
const int OO = 50050;
int n, sum, rem, a[105], dp[105][50050];
int solve(int p, int c)
{
    int &ret = dp[p][c];
    if (ret != -1)
        return ret;
    if (c >= rem)
        return ret = c;
    if (p >= n)
        return ret = OO;
    int ret1 = solve(p + 1, c);
    int ret2 = solve(p + 1, c + a[p]);
    return ret = min(ret1, ret2);
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        sum = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i], sum += a[i];
        memset(dp, -1, sizeof dp);
        rem = ceil(sum / 2.0);
        int h = solve(0, 0);
        cout << h - (sum - h) << endl;
    }
    return 0;
}
