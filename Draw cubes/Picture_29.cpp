/*
n = 5
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << (char)('A' + i - 1);
        cout << endl;
    }
}