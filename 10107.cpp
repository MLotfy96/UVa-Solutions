#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x;
    int n;
    while (cin >> n)
    {
        x.push_back(n);
        sort(x.begin(), x.end());
        if (x.size() % 2)
            cout << x[x.size() / 2] << endl;
        else
            cout << (x[x.size() / 2] + x[x.size() / 2 - 1]) / 2 << endl;
    }
    return 0;
}
