#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int math;
        int english;
    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void hello()
    {
        cout << "Hello from " << name << endl;
    }
    void total()
    {
        cout << "Total Marks of " << name << " = " << math + english << endl;
    }
};

int main()
{
    Student Authoi("Md. Jawad Jabbar Khan Authoi", 1, 97, 96);
    cout << Authoi.name << endl;
    Authoi.hello();
    Authoi.total();
    Student Abc("Abul", 1, 94, 94);
    Abc.hello();
    Abc.total();
    return 0;
}