#include <bits/stdc++.h>
#define EPS 1e-8
using namespace std;
const int OO = 1000;
int n, m, a[15][105], mem[(1 << 10) + 10][105];
int dp(int mask, int rem)
{
	int &ret = mem[mask][rem];
	if (ret != -1)
		return ret;
	if (mask == 0)
		return ret = 0;
	if (rem == 0)
		return ret = -OO;
	ret = -OO;
	for (int i = 0; i < n; i++)
	{
		if (((mask >> i) & 1) == 1)
		{
			int f = 0;
			for (int j = 1; j <= rem; j++)
			{
				if (a[i][j] < 5)
					continue;
				f = 1;
				ret = max(ret, dp(((((1 << n) - 1) ^ (1 << i)) & mask), rem - j) + a[i][j]);
			}
			if (!f)
				return ret = -OO;
		}
	}
	return ret;
}
int main()
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; i++)
			for (int j = 1; j <= m; j++)
				scanf("%d", &a[i][j]);
		memset(mem, -1, sizeof mem);
		int ans = dp((1 << n) - 1, m);
		if (ans > 0)
			printf("Maximal possible average mark - %0.2lf.\n", (double)(ans + EPS) / n);
		else
			printf("Peter, you shouldn't have played billiard that much.\n");
	}
	return 0;
}