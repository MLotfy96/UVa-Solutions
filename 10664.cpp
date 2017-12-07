#include <bits/stdc++.h>
using namespace std;
bool found, vis[21][202];
int total, n, a[20];
void check(int p, int sum)
{
    if (vis[p][sum])
        return;
    vis[p][sum] = 1;
    if (sum * 2 == total)
        found = 1;
    if (sum * 2 >= total)
        return;
    if (p >= 20)
        return;
    check(p + 1, sum + a[p]);
    check(p + 1, sum);
}
int main()
{
    int tc;
    cin >> tc;
    getchar();
    while (tc--)
    {
        string str;
        getline(cin, str);
        istringstream iss(str);
        int x, c = 0;
        total = 0;
        memset(a, 0, sizeof a);
        while (iss >> x)
            a[c++] = x, total += x;
        found = 0;
        memset(vis, 0, sizeof vis);
        check(0, 0);
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
