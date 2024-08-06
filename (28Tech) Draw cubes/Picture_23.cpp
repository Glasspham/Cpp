/*
n = 5
*****
*  *
* *
**
*
**
* *
*  *
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
        {
            if(i == 1 || j == 1 || abs(i - j) == n - 1 || j + i == n + 1 || i == 2 * n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}