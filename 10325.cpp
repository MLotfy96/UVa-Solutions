#include <bits/stdc++.h>
using namespace std;
const long long OO = 1e12 + 5;
long long n, m, a[16];
int getCount(int i, long long d, int k)
{
	if (i == m && d == 1)
		return 0;
	else if (i == m)
		return (n / d) * k;
	return getCount(i + 1, d * a[i] / __gcd(d, a[i]), k * -1) + getCount(i + 1, d, k);
}
int main()
{
	while (cin >> n >> m)
	{
		set<int> s;
		for (int i = 0; i < m; i++)
			cin >> a[i];
		cout << n - getCount(0, 1, -1) << endl;
	}
	return 0;
}