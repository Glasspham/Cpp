#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a + n);
        int cnt(1);
        for(int i = 0; i < n - 1; i++)
            if(a[i + 1] - a[i] > k)
                cnt++;
        cout << "Case #" << i << ": " << cnt << endl;
    }
}