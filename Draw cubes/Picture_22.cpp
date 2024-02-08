/*
n = 5
*****
****
***
**
*
**
***
****
*****
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;
    for(int i = 1; i <= 2 * n - 1; i++)
    {
        for(int j = 1; j <= abs(n - i) + 1; j++)
            cout << "*";
        cout << endl;
    }
}