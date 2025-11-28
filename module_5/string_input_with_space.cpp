#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int x;
    cin >> x;
    string s;
    // cin >> s; Takes only one word
    // cin.getline(s, 100); Wont work , work only for static arrays
    cin.ignore(); // ignores enter
    getline(cin, s);
    cout << x << endl;
    cout << s << endl;
    return 0;
}