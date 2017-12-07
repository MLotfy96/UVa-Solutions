#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n, m, x, idx;
    cin >> n;
    for (int i = 0; i < n; i++)
        scanf("%d", &x), v.push_back(x);
    sort(v.begin(), v.end());
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        idx = lower_bound(v.begin(), v.end(), x) - v.begin();
        int j;
        for (j = idx - 1; j >= 0; j--)
        {
            if (v[j] < x)
                break;
        }
        if (j >= 0)
            cout << v[j] << " ";
        else
            cout << 'X' << " ";
        for (j = idx; j < n; j++)
        {
            if (v[j] > x)
                break;
        }
        if (j < n)
            cout << v[j] << endl;
        else
            cout << 'X' << endl;
    }
    return 0;
}
