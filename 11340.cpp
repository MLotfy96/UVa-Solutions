#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        map<char, int> a;
        int n, m, x;
        int ans = 0;
        char c;
        ans = 0; c = 0; x = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> c >> x;
            a[c] = x;
        }
        cin >> m;
        m++;
        for (int i = 0; i < m; i++)
        {
            string s;
            s = "";
            getline(cin, s);
            for (int j = 0; j < s.length(); j++)
            {
                ans += a[s[j]];
            }
        }
        printf("%.2f$\n", ans / 100.0);
    }
    return 0;
}
