#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	while (n)
	{
		int a[n + 2];
		while (1)
		{
			for (int i = 1; i <= n; i++)
			{
				scanf("%d", &a[i]);
				if (a[1] == 0)
					break;
			}
			if (a[1] == 0)
				break;
			stack<int> st;
			st.push(n + 1);
			int ans = 1, idx = n;
			for (int i = n; i > 0; i--)
			{
				while (st.top() != i && idx > 0)
					st.push(a[idx--]);
				if (st.top() == i)
					st.pop();
			}
			if (st.size() > 1)
				printf("No\n");
			else
				printf("Yes\n");
		}
		printf("\n");
		scanf("%d", &n);
	}
	return 0;
}