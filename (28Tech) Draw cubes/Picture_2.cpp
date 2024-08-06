/*
n = 5
A 
B B 
C C C 
D D D D 
E E E E E 
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;

    for(int i = 'A'; i <= 'A' + n - 1; i++)
    {
        for(int j = 'A'; j <= i;j++)
        {
            cout << (char)i << ' ';
        }
        cout << endl;
    }
}