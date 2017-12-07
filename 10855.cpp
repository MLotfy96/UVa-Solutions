#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        int n, m, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
        cin >> n >> m;
        if (!n && !m)
            break;
        char x[n][n], a[m][m], b[m][m], c[m][m], d[m][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> x[i][j];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        for (int i = 0, k = m - 1; i < m; i++, k--)
            for (int j = 0; j < m; j++)
                b[j][k] = a[i][j];
        for (int i = 0, k = m - 1; i < m; i++, k--)
            for (int j = 0; j < m; j++)
                c[j][k] = b[i][j];
        for (int i = 0, k = m - 1; i < m; i++, k--)
            for (int j = 0; j < m; j++)
                d[j][k] = c[i][j];

        for (int i = 0; i <= n - m; i++)
        {
            for (int j = 0; j <= n - m; j++)
            {
                int k, r;
                k = 0; r = 0;
                if (x[i][j] == a[0][0])
                    for (k = 0; k < m; k++)
                        for (r = 0; r < m; r++)
                            if (x[i + k][j + r] != a[k][r]) { k = m; break; }
                if (k == m)
                    c1++;
                k = 0; r = 0;
                if (x[i][j] == b[0][0])
                    for (k = 0; k < m; k++)
                        for (r = 0; r < m; r++)
                            if (x[i + k][j + r] != b[k][r]) { k = m; break; }
                if (k == m)
                    c2++;
                k = 0; r = 0;
                if (x[i][j] == c[0][0])
                    for (k = 0; k < m; k++)
                        for (r = 0; r < m; r++)
                            if (x[i + k][j + r] != c[k][r]) { k = m; break; }
                if (k == m)
                    c3++;
                k = 0; r = 0;
                if (x[i][j] == d[0][0])
                    for (k = 0; k < m; k++)
                        for (r = 0; r < m; r++)
                            if (x[i + k][j + r] != d[k][r]) { k = m; break; }
                if (k == m)
                    c4++;
            }
        }
        cout << c1 << " " << c2 << " " << c3 << " " << c4 << endl;
    }
    return 0;
}
