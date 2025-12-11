#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sect;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sect >> a[i].id;
    }
    char ch_array[n];
    for (int i = 0; i < n; i++)
    {
        ch_array[i] = a[i].sect;
    }
    reverse(ch_array, ch_array + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << ch_array[i] << " " << a[i].id << endl;
    }

    return 0;
}