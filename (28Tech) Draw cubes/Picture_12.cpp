/*
n = 1
*   ***********
*   *  *  *    
*   *  *  *    
*   *  *  *    
*****  *  *****
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            for(int m = 1; m <= 15; m++)
            {
                if((i != 5 && m >= 2 && m <= 4) || 
                (i != 1 && ((m >= 6 && m <= 7) || (m >= 9 && m <= 10)))
                || (i != 1 && i != 5 && m > 11))
                {
                    cout << string(n , ' ');
                }
                else
                    cout << string(n , '*');
            }
            cout << endl;
        }
    }
}