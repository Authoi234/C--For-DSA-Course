#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for (char c : s)
    {
        if (c == 'e' || c == 'E'){
            e++;
        }
        if (c == 'g' || c == 'G'){
            g++;
        }
        if (c == 'y' || c == 'Y'){
            y++;
        }
        if (c == 'p' || c == 'P'){
            p++;
        }
        if (c == 't' || c == 'T'){
            t++;
        }
    }

    int minimum_egypt = min({e,g,y,p,t});

    cout << minimum_egypt;

    return 0;
}