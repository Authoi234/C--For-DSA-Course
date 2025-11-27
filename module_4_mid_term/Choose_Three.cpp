#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n, sum;
        cin >> n >> sum;
        int a[n];
        for (int j = 0; j < n; j++)
        { 
            cin >> a[j];
        }
        int flag = 1;
        int found = 0;

        for (int j = 0; j < n && found == 0; j++)
        {
            for (int k = 0; k < n && found == 0; k++)
            {
                for (int c = 0; c < n; c++)
                {
                    if (j != k && k != c && j != c)
                    {
                        if (a[j] + a[k] + a[c] == sum)
                        {
                            cout << "YES" << endl;
                            flag = 0;
                            found = 1;
                            break;
                        }
                    }
                }
                
            }
            
        }
        
        if(flag == 1)
        {
            cout << "NO" << endl;
        }

    }
    
    return 0;
}
