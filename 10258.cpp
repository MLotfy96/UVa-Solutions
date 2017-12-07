#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    getchar();
    getchar();
    while (tc--)
    {
        vector< vector<int> > v;
        v.resize(101);
        for (int i = 0; i < 101; i++)
            v[i].resize(13);
        for (int i = 0; i < 101; i++)
            for (int j = 0; j < 13; j++)
                v[i][j] = 0;
        for (int i = 0; i < 101; i++)
            v[i][3] = i;
        int c, p, t;
        char l;
        string str;
        getline(cin, str);
        while (str != "")
        {
            istringstream iss(str);
            iss >> c >> p >> t >> l;
            v[c][0] = -1;
            if (l == 'C' && v[c][p + 3] <= 0)
                v[c][p + 3] = t + abs(v[c][p + 3]);
            if (l == 'I' && v[c][p + 3] <= 0)
                v[c][p + 3] -= 20;
            str = "";
            getline(cin, str);
        }
        for (int i = 1; i < 101; i++)
            for (int j = 4; j < 13; j++)
                if (v[i][j] > 0)
                    v[i][1]--, v[i][2] += v[i][j];
        sort(v.begin(), v.end());
        for (int i = 0; i < 101 && v[i][0] == -1; i++)
            cout << v[i][3] << " " << abs(v[i][1]) << " " << v[i][2] << endl;
        if (tc)
            cout << endl;
    }
    return 0;
}
