#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, c = 1;
    cin >> n >> q;
    while (n || q)
    {
        int x, idx;
        vector<int> v;
        for (int i = 0; i < n; i++)
            cin >> x, v.push_back(x);
        sort(v.begin(), v.end());
        cout << "CASE# " << c << ":\n";
        for (int i = 0; i < q; i++)
        {
            cin >> x;
            idx = lower_bound(v.begin(), v.end(), x) - v.begin();
            if (idx < n && v[idx] == x)
                cout << x << " found at " << idx + 1 << endl;
            else
                cout << x << " not found" << endl;
        }
        cin >> n >> q;
        c++;
    }
    return 0;
}
