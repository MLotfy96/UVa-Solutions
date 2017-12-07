#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, c;
	cin >> n >> m >> c;
	while (n || m)
	{
		n = max(n - 7, 0);
		m = max(m - 7, 0);
		int a, b;
		a = (n / 2) + (n % 2), b = (n / 2);
		if (c == 0)
			swap(a, b);
		a *= (m / 2) + (m % 2);
		b *= (m / 2);
		cout << a + b << endl;
		cin >> n >> m >> c;
	}
	return 0;
}