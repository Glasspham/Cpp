#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        int value_min = INT_MAX, value_max = INT_MIN;
        for(int &x : a) 
        {
            cin >> x;
            value_min = min(value_min,x);
            value_max = max(value_max,x);
        }
        
        int cnt = 0;
        for(int i = value_min; i <= value_max; i++)
        {
            if(find(a, a + n, i) == a + n)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}