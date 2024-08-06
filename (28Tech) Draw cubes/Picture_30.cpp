/*
n = 5
ABCDE
BCDEF
CDEFG
DEFGH
EFGHI
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
            cout << (char)('A' + i + j - 2);
        cout << endl;
    }
}