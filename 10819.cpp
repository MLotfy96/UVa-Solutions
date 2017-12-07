#include <bits/stdc++.h>
using namespace std;
const int OO = 2000500;
int money, n, p[105], f[105];
int dp[105][10250];
int getMax(int i, int sum)
{
    if (i == n)
        if (sum <= money || (sum > 2000 && sum <= money + 200))
            return 0;
        else
            return -OO;
    int &ret = dp[i][sum];
    if (ret != -1)
        return ret;
    int ret1 = getMax(i + 1, sum);
    int ret2 = -OO;
    if (sum + p[i] <= money + 200)
        ret2 = getMax(i + 1, sum + p[i]) + f[i];
    return ret = max(ret1, ret2);
}
int main()
{
    while (cin >> money >> n)
    {
        for (int i = 0; i < n; i++)
            cin >> p[i] >> f[i];
        memset(dp, -1, sizeof dp);
        cout << getMax(0, 0) << endl;
    }
    return 0;
}
