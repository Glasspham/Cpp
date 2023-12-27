/*
1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;

    for(int i = 1; i <= n; i++)
    {
        int ans = i;
        for(int j = 1; j <= n; j++)
            cout << ans++ << ' ';
        cout << endl;
    }
}