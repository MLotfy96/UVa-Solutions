#include <bits/stdc++.h>
using namespace std;
int n, x, a[105];
long long dp[105][105];
long long getMax(int l, int r)
{
    long long &ret = dp[l][r];
    if (ret != -1)
        return ret;
    if (l >= n || r <= 0)
        return ret = 1;
    long long ret1 = getMax(l + 1, r);


}
int main()
{
    string str;
    while (getline(cin, str))
    {
        istringstream iss(str);
        n = 0;
        iss >> x;
        while (x != -999999)
        {
            a[n++] = x;
            iss >> x;
        }
        memset(dp, -1, sizeof dp);
        cout << getMax(0, n - 1) << endl;
    }
    return 0;
}
