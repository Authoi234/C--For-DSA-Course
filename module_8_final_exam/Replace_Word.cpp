#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;
        int x_len = x.size();
        for (int i = 0; i + x.size() <= s.size(); i++)
        {
            bool match = true;
            for (int j = 0; j < x.size(); j++)
            {
                if (s[i + j] != x[j])
                {
                    match = false;
                    break;
                }
            }
            if (match == true)
            {
                s.replace(i, x.size(), "#");
                i = max(-1, i - x_len);
            }
        }

        cout << s << endl;
    }

    return 0;
}