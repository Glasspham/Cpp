/*
n = 4 m = 5
*****
*   *
*   *
*****
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
        {
            if(i == 1 || i == n || j == 1 || j == m)
                cout << '*';
            else 
                cout << ' ';
        }
        cout << endl;
    }
}