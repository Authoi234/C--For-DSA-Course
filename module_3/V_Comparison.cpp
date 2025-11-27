#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    char op;
    cin>>a>>op>>b;
    switch (op)
    {
    case '<':
        if (a < b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }   
        break;
    
    case '=':
        if (a == b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }   
        break;
    
    case '>':
        if (a > b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }   
        break;
    
    default:
        break;
    }
    return 0;
}