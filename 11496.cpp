#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	while (n)
	{
		int a[n], ans = 0;
		for (int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		if ((a[0] > a[n - 1] && a[0] > a[1]) || (a[0] < a[n - 1] && a[0] < a[1]))
			ans++;
		if ((a[n - 1] > a[0] && a[n - 1] > a[n - 2]) || (a[n - 1] < a[0] && a[n - 1] < a[n - 2]))
			ans++;
		for (int i = 1; i < n - 1; i++)
		{
			if (a[i] > a[i - 1] && a[i] > a[i + 1])
				ans++;
			else if (a[i] < a[i - 1] && a[i] < a[i + 1])
				ans++;
		}
		printf("%d\n", ans);
		scanf("%d", &n);
	}
	return 0;
}