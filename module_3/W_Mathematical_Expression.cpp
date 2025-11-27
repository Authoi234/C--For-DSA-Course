#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b, result;
    char mathOp, Q;
    cin>>a>>mathOp>>b>>Q>>result;
    switch (mathOp)
    {
    case '+':
        if (a + b == result)
        {
            printf("Yes");
        }
        else
        {
            printf("%d",a+b);
        }   
        break;
    
    case '-':
        if (a - b == result)
        {
            printf("Yes");
        }
        else
        {
            printf("%d",a-b);
        }   
        break;
    
    case '*':
        if (a * b == result)
        {
            printf("Yes");
        }
        else
        {
            printf("%d",a*b);
        }   
        break;
    
    default:
        break;
    }
    return 0;
}