#include <bits/stdc++.h>
using namespace std;
int n, arr[10005], dp[10005][1005], ans;
int getMax(int p, int sum)
{
    if (sum < 0)
        sum = 0;
    if (p == n)
        return sum;
    int &ret = dp[p][sum];
    ret = max(sum, getMax(p + 1, sum + arr[p]));
    return ret;
}
int main()
{
    cin >> n;
    while (n)
    {
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        memset(dp, -1, sizeof dp);
        ans = getMax(0, 0);
        if (ans > 0)
            cout << "The maximum winning streak is " << ans << "." << endl;
        else
            cout << "Losing streak." << endl;
        cin >> n;
    }
    return 0;
}
