#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while (cin >> str)
    {
        int mn;
        vector< pair<int, string> > v;
        v.resize(21);
        v[10].second = str;
        for (int i = 9; i >= 0; i--)
        {
            v[i].second = v[i + 1].second;
            prev_permutation(v[i].second.begin(), v[i].second.end());
            mn = 30;
            for (int j = 1; j < v[i].second.length(); j++)
                if (abs(v[i].second[j] - v[i].second[j - 1]) < mn)
                    mn = abs(v[i].second[j] - v[i].second[j - 1]);
            v[i].first = -mn;
        }
        for (int i = 10; i < 21; i++)
        {
            v[i].second = v[i - 1].second;
            next_permutation(v[i].second.begin(), v[i].second.end());
            mn = 30;
            for (int j = 1; j < v[i].second.length(); j++)
                if (abs(v[i].second[j] - v[i].second[j - 1]) < mn)
                    mn = abs(v[i].second[j] - v[i].second[j - 1]);
            v[i].first = -mn;
        }
        sort(v.begin(), v.end());
        cout << v[0].second << abs(v[0].first) << endl;
    }
    return 0;
}
