#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100004];
    while (cin.getline(s, 100004))
    {
        int j = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] != ' ')
            {
                s[j++] = s[i];
            }
        }
        s[j] = '\0';

        sort(s, s + j);
        cout << s << endl;
    }
    return 0;
}