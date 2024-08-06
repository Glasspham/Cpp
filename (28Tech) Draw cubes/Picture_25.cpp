/*
n = 5
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;
    for(int i = 1; i <= 2 * n - 1; i++)
    {
        for(int j = 1; j <= 2 * n - 1; j++)
        {   
            int diff = min({i - 1, j - 1, 2 * n - i - 1, 2 * n - j - 1});
            cout << n - diff << ' ';
        }
        cout << endl;    
    }
}