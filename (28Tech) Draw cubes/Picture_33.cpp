/*
n = 5
A
ACA
ACECA
ACEGECA
ACEGIGECA
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;
    for(int i = 1; i <= n; i++)
    {
        char c = 'A';
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            if(j < i)
            {
                cout << c;
                c += 2;
            }
            else
            {
                cout << c;
                c -= 2;
            }
        }
        cout << endl;
    }
}