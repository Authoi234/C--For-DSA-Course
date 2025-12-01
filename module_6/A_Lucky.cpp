#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int cnt = 1;
        int firstThreeSum = 0;
        int lastThreeSum = 0;
        for (char c : s)
        {
            int our_chars_number = c - '0';
            if (cnt <= 3)
            {
                firstThreeSum += our_chars_number;
            }
            else
            {
                lastThreeSum += our_chars_number;
            }
            cnt++;
        }
        if(firstThreeSum == lastThreeSum){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}