#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool isPalindrome = true;
    int b = s.size()-1;
    for (int a = 0; a < b; a++)
    {
        if (s[a] != s[b])
        {
            isPalindrome = false;
        }
        b--;
    }

    if (isPalindrome == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}