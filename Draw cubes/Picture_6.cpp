/*
n = 5
1 
2 6 
3 7 10 
4 8 11 13 
5 9 12 14 15 
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;

    for(int i = 1; i <= n; i++)
    {
        int ans = i, cnt = n - 1;
        for(int j = 1; j <= i; j++)
        {
            cout << ans << ' ';
            ans += cnt;
            cnt--;
        }
        cout << endl;
    }
}