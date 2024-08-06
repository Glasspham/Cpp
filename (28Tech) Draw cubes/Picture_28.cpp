/*
n = 5
1 
2 4 
7 11 16 
22 29 37 46 
56 67 79 92 106 
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int x = 1, gap = 1;
    cout << "n = " << n << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << x << ' ';
            x += gap;
            gap++;
        }
        cout << endl;
    }
}