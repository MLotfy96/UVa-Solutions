#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
        if (!n) break;
        int a[n][n], r[n] = {0}, c[n] = {0}, inr, inc, r_counter = 0, c_counter = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j], r[i] += a[i][j], c[j] += a[i][j];
        for (int i = 0; i < n; i++)
            if (r[i] % 2 != 0)
                r_counter++, inr = i + 1;
        for (int i = 0; i < n; i++)
            if (c[i] % 2 != 0)
                c_counter++, inc = i + 1;
        if (r_counter == 0 && c_counter == 0)
            cout << "OK" << endl;
        else if (r_counter == 1 && c_counter == 1)
            cout << "Change bit (" << inr << "," << inc << ")" << endl;
        else
            cout << "Corrupt" << endl;
    }
    while (n != 0);
    return 0;
}
