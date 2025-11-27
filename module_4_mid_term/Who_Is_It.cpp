#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.marks;
        cin >> b.id >> b.name >> b.section >> b.marks;
        cin >> c.id >> c.name >> c.section >> c.marks;

        int max_marks = max(a.marks, max(b.marks, c.marks));

        int maxdhari[3];
        int count = 0;

        if (a.marks == max_marks)
        {
            maxdhari[count++] = a.id;
        }
        if (b.marks == max_marks)
        {
            maxdhari[count++] = b.id;
        }
        if (c.marks == max_marks)
        {
            maxdhari[count++] = c.id;
        }

        int x = maxdhari[0];
        for (int j = 1; j < count; j++)
        {
            if (maxdhari[j] < x)
            {
                x = maxdhari[j];
            }
        }

        if (x == a.id)
        {
            cout << a.id << " " << a.name << " " << a.section << " " << a.marks << endl;
        }
        else if (x == b.id)
        {
            cout << b.id << " " << b.name << " " << b.section << " " << b.marks << endl;
        }
        else
        {
            cout << c.id << " " << c.name << " " << c.section << " " << c.marks << endl;
        }
    }

    return 0;
}