#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	while (n)
	{
		int a = 0, b = 0, x = n, idx = 0, cnt = 0;
		while (x)
		{
			if (x & 1)
			{
				cnt++;
				if (cnt & 1)
					a |= (1 << idx);
				else
					b |= (1 << idx);
			}
			x = x >> 1;
			idx++;
		}
		printf("%d %d\n", a, b);
		scanf("%d", &n);
	}
	return 0;
}