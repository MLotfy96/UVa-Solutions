#include <bits/stdc++.h>
using namespace std;
int main()
{
	int b[3], g[3], c[3];
	while (cin >> b[0] >> g[0] >> c[0] >> b[1] >> g[1] >> c[1] >> b[2] >> g[2] >> c[2])
	{
		string s[6], str;
		s[0] = "BCG";
		for (int i = 1; i < 6; i++)
			s[i] = s[i - 1], next_permutation(s[i].begin(), s[i].end());
		int ans, mn = INT_MAX;
		for (int i = 0; i < 6; i++)
		{
			ans = 0;
			for (int j = 0; j < 3; j++)
			{
				if (s[i][j] == 'B')
					ans += g[j] + c[j];
				if (s[i][j] == 'G')
					ans += b[j] + c[j];
				if (s[i][j] == 'C')
					ans += g[j] + b[j];
			}
			if (ans < mn)
				str = s[i], mn = ans;
		}
		cout << str << " " << mn << endl;
	}
	return 0;
}
