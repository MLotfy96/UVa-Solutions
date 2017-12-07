#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        int r, c, m, n, mx = 0, ans = 0;
        char ch;
        map<char, int> mp;
        cin >> r >> c >> m >> n;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> ch, mp[ch]++;
        for (char i = 'A'; i <= 'Z'; i++)
            if (mp[i] > mx)
                mx = mp[i];
        for (char i = 'A'; i <= 'Z'; i++)
            if (mp[i] < mx)
                ans += mp[i] * n;
            else
                ans += mp[i] * m;
        cout << "Case " << tcc << ": " << ans << endl;
    }
    return 0;
}
