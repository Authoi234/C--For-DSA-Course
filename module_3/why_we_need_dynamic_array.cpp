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
        this->roll = r;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun(){
    Student karim (2,5,4.7);
    Student* p = &karim;
    return p;
}

int main()
{
    Student* p = fun();

    cout << p->roll << " " << p->cls << " " << p->gpa << endl;

    return 0;
}