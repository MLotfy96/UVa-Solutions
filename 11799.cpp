
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	scanf("%d", &tc);
	for (int tcc = 1; tcc <= tc; tcc++)
	{
		int n, x, ans = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d", &x), ans = max(ans, x);
		printf("Case %d: %d\n", tcc, ans);
	}
	return 0;
}