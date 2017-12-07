#include <bits/stdc++.h>
using namespace std;
int n, s;
long long mem[70][2][70];
long long dp(int i, int prev, int cnt)
{
	if (i < 0 || cnt < 0)
		return 0;
	if (i == 0 && cnt == 0)
		return 1;
	long long &ret = mem[i][prev][cnt];
	if (ret != -1)
		return ret;
	return ret = dp(i - 1, 0, cnt) + dp(i - 1, 1, cnt - prev);
}
int main()
{
	memset(mem, -1, sizeof mem);
	while (scanf("%d %d", &n, &s) && n > 0)
		printf("%lld\n", dp(n, 1, s));
	return 0;
}