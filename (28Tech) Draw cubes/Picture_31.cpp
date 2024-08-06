/*
n = 5
A 
B C 
D E F 
G H I J 
K L M N O 
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    char c = 'A';
    cout << "n = " << n << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << c << ' ';
            c++;
        }
        cout << endl;
    }
}