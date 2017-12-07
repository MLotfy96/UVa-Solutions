#include <bits/stdc++.h>
using namespace std;
int curr[5] = {1, 5, 10, 25, 50}, x;
long long dp[10][10000];
long long countWays(int p, int sum)
{
    if (sum == 0)
        return 1;
    if (p == 5)
        return 0;
    long long &ret = dp[p][sum];
    if (ret != -1)
        return ret;
    ret = countWays(p + 1, sum);
    if (curr[p] <= sum)
        ret += countWays(p, sum - curr[p]);
    return ret;
}
int main()
{
    memset(dp, -1, sizeof dp);
    while (cin >> x)
        cout << countWays(0, x) << endl;
    return 0;
}
