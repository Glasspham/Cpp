/*
n = 4 m = 5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/
#include<iostream>
using namespace std;
int main()
{
    int n,m; cin >> n >> m;
    cout << "n = " << n << " m = " << m << endl;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            cout << "* ";
        cout << endl;
    }
}