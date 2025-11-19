#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;   
    cin.ignore(); // to ignore the newline character after integer input
    string s;
    cin >> s;
    // cin.getline(s, 100); // scan with space
    cout << s ;
    cout << endl << x;

}