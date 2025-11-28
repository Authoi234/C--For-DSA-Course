#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    string s2 = "Hi";
    // s.append(s2);
    s+=s2;
    cout << s << endl;
    s.push_back('A');
    cout << s << endl;
    s[0] = 'G';
    cout << s << endl;
    s.pop_back();
    cout << s << endl;
    s = s2;
    cout << s << endl;
    s.assign("Gello o");
    cout << s << endl;
    s.erase(3,2);
    cout << s << endl;
    s.replace(2, 0, "Bangladesh");
    cout << s << endl;
    s.insert(14, "Authoi");
    cout << s << endl;
    return 0;
}