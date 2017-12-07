#include <bits/stdc++.h>
using namespace std;
int curr[11] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
long long ans, dp[100][500000];
int x, y;
long long countWays(int p, int sum)
{
    if (sum == 0)
        return 1;
    if (p == 11)
        return 0;
    long long &ret = dp[p][sum];
    if (ret != -1)
        return ret;
    ret = countWays(p + 1, sum);
    if (curr[p] <= sum)
        ret += countWays(p, sum - curr[p]);
    return ret;
}
long long countDigits(long long x)
{
    int c = 0;
    while (x)
        x /= 10, c++;
    return c;
}
int main()
{
    scanf("%d.%d", &x, &y);
    x = x * 100 + y;
    memset(dp, -1, sizeof dp);
    while (x)
    {
        ans = countWays(0, x);
        int s;
        if ((double)x / 100.0 >= 10 && (double)x / 100.0 < 100)
            s = 1;
        else if ((double)x / 100.0 >= 100)
            s = 0;
        else
            s = 2;
        for (int i = 0; i < s; i++)
            cout << " ";
        printf("%0.2f", (double)x / 100.0);
        for (int i = 0; i < 17 - countDigits(ans); i++)
            cout << " ";
        cout << ans << endl;
        scanf("%d.%d", &x, &y);
        x = x * 100 + y;
    }
    return 0;
}
