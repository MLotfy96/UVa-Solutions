#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	string x;
	scanf("%d", &tc);
	getline(cin, x);
	while (tc--)
	{
		int ans = 0;
		string s;
		getline(cin, s);
		for (int i = 0; i < s.length(); i += 3)
		{
			if (s[i] == 'F' && s[i + 1] == 'F')
				ans++;
			if (s[i] == 'M' && s[i + 1] == 'M')
				ans--;
		}
		if (ans == 0 && s.length() > 2)
			printf("LOOP\n");
		else
			printf("NO LOOP\n");
	}
	return 0;
}