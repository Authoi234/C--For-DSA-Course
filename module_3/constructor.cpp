#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student( int r, int cls, double gpa )
    {
        roll = r;
        (*this).cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    // Student rahim;
    // cin >> rahim.roll >> rahim.cls >> rahim.gpa;
    
    // cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    Student karim(3, 5, 5.00);

    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}