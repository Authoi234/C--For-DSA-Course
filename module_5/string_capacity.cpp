#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    s.clear();
    cout << s << endl;
    cout << s.size() << endl;

    if (s.empty() == true)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    string a = "Hello world";

    a.resize(7);
    cout << a << endl;
    a.resize(15, 'x');
    cout << a << endl;

    return 0;
}