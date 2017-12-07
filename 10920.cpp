#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sz, p;
    do
    {
        cin >> sz >> p;
        if (!sz && !p) break;
        int x = 1, i, j;
        i = sz / 2 + 1;
        j = sz / 2 + 1;
        x = 1;
        for (int k = 1; k <= sz; k++)
        {
            if (x == p) break;
            i += k;
            x += k;
            if (x == p) break;
            if (x > p) { i -= x - p; break; }
            j -= k;
            x += k;
            if (x == p) break;
            if (x > p) { j += x - p; break; }
            k++;
            i -= k;
            x += k;
            if (x == p) break;
            if (x > p) { i += x - p; break; }
            j += k;
            x += k;
            if (x == p) break;
            if (x > p) { j -= x - p; break; }
        }
        cout << "Line = " << i << ", column = " << j << "." << endl;
    }
    while (sz != 0 && p != 0);
    return 0;
}
