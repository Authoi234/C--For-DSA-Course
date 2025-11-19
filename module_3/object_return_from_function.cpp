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

Student fun(){
    Student karim (2,5,4.7);
    return karim;
}

int main()
{
    Student obj = fun();

    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}