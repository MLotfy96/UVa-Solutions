#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (1)
    {
        cin >> s;
        string t = s;
        if (s[0] == '#' && s.length() == 1) break;
        next_permutation(s.begin(), s.end());
        if (s > t)
            cout << s << endl;
        else
            cout << "No Successor" << endl;
    }
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (1)
    {
        cin >> s;
        string copyy = s;
        if (s[0] == '#' && s.length() == 1) break;
        int i, j, in;
        char c;
        for (i = s.length() - 2; i >= 0; i--)
        {
            in = -1, c = 'z' + 1;
            for (j = i + 1; j < s.length(); j++)
            {
                if (s[j] > s[i] && s[j] < c)
                    c = s[j], in = j;
            }
            if (in != -1)
            {
                swap(s[i], s[in]);
                break;
            }
        }
        if (s == copyy)
            cout << "No Successor" << endl;
        else
        {
            sort(s.begin() + i + 1, s.end());
            cout << s << endl;
        }
    }
    return 0;
}
*/