#include <bits/stdc++.h>
using namespace std;
int n, x, t, k, h;
int price[105], fav[105];
int dp[105][25][1005];
int getMax(int p, int d, int sum)
{
    if (p == k)
        return 0;
    int &ret = dp[p][d][sum];
    if (ret != -1)
        return ret;
    ret = getMax(p + 1, d, sum);
    if (d < n && ceil((sum + price[p] + t) * 1.1L) <= x)
        ret = max(ret, fav[p] + getMax(p + 1, d + 1, sum + price[p]));
    if (d + 1 < n && ceil((sum + price[p] * 2 + t) * 1.1L) <= x)
        ret = max(ret, fav[p] * 2 + getMax(p + 1, d + 2, sum + price[p] * 2));
    return ret;
}
int main()
{
    cin >> n >> x >> t >> k;
    while (n || x || t || k)
    {
        memset(fav, 0, sizeof fav);
        for (int i = 0; i < k; i++)
        {
            cin >> price[i];
            for (int j = 0; j <= n; j++)
                cin >> h, fav[i] += h;
        }
        x *= n + 1;
        t *= n + 1;
        n = 2 * (n + 1);
        memset(dp, -1, sizeof dp);
        printf("%0.2f\n", (double)getMax(0, 0, 0) / (n / 2));
        cin >> n >> x >> t >> k;
    }
    return 0;
}
