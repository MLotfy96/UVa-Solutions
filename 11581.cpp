#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a[3][3], b[3][3], flag = 0, ans = -1;
        char ch;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%1d", &a[i][j]);
                if (a[i][j] == 1)
                    flag = 1;
            }
        }
        while (flag)
        {
            b[0][0] = (a[0][1] + a[1][0]) % 2;
            b[0][1] = (a[0][0] + a[1][1] + a[0][2]) % 2;
            b[0][2] = (a[0][1] + a[1][2]) % 2;
            b[1][0] = (a[0][0] + a[1][1] + a[2][0]) % 2;
            b[1][1] = (a[0][1] + a[1][0] + a[1][2] + a[2][1]) % 2;
            b[1][2] = (a[0][2] + a[1][1] + a[2][2]) % 2;
            b[2][0] = (a[2][1] + a[1][0]) % 2;
            b[2][1] = (a[2][0] + a[1][1] + a[2][2]) % 2;
            b[2][2] = (a[2][1] + a[1][2]) % 2;
            ans++;
            flag = 0;
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    a[i][j] = b[i][j];
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    if (a[i][j] == 1) flag = 1;
        }
        cout << ans << endl;
    }
    return 0;
}
