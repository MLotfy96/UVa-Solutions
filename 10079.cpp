#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	while (n >= 0)
	{
		cout << (n * (1 + n)) / 2 + 1 << endl;
		cin >> n;
	}
	return 0;
}