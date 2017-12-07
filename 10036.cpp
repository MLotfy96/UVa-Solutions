#include <bits/stdc++.h>
using namespace std;
int n, k, a[10005];
int mem[10005][105];
int dp(int i, int mod)
{
	int &ret = mem[i][mod];
	if (ret != -1)
		return ret;
	if (i == n && mod == 0)
		return ret = 1;
	else if (i == n)
		return ret = 0;
	return ret = dp(i + 1, ((mod + a[i]) % k + k) % k) || dp(i + 1, ((mod - a[i]) % k + k) % k);
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> k;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		memset(mem, -1, sizeof mem);
		if (dp(1, (a[0] % k + k) % k))
			cout << "Divisible" << endl;
		else
			cout << "Not divisible" << endl;
	}
	return 0;
}