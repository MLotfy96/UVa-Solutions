#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	while (n)
	{
		vector<int> v;
		queue<int> q;
		for (int i = 1; i <= n; i++)
			q.push(i);
		while (q.size() > 1)
		{
			v.push_back(q.front());
			q.pop();
			q.push(q.front());
			q.pop();
		}
		printf("Discarded cards:");
		for (int i = 0; i < v.size(); i++)
		{
			if (i)
				printf(",");
			printf(" %d", v[i]);
		}
		printf("\n");
		printf("Remaining card: %d\n", q.front());
		scanf("%d", &n);
	}
	return 0;
}