#include <bits/stdc++.h>
using namespace std;
int coins[5] = {1, 5, 10, 25, 50};
long long dp[30001];
int main()
{
    memset(dp, 0, sizeof dp);
    dp[0] = 1;
    for (int i = 0; i < 5; i++)
        for (int j = 1; j < 30001; j++)
            if (j >= coins[i])
                dp[j] += dp[j - coins[i]];
    int n;
    while (cin >> n)
    {
        if (dp[n] == 1)
            cout << "There is only 1 way to produce " << n << " cents change." << endl;
        else
            cout << "There are " << dp[n] << " ways to produce " << n << " cents change." << endl;
    }
    return 0;
}