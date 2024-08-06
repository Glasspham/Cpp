#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        ll n, m; cin >> n >> m;
        #if 0 // Sort and Merge
        ll a[n], b[m];
        vector<ll> result;
        for(ll &x : a) cin >> x;
        for(ll &x : b) cin >> x;
        sort(a, a + n);
        sort(b, b + m);
        ll i = 0, j = 0;
        while (i < n && j < m)
        {
            if(a[i] < b[j])
                result.push_back(a[i++]);
            else
                result.push_back(b[j++]);
        }
        while (i < n)
            result.push_back(a[i++]);
        while (j < m)
            result.push_back(b[j++]);
        for(int x : result)
            cout << x << ' ';
        #endif

        #if 1 // Sort
        ll arr[n + m];
        for(ll &i : arr) cin >> i;
        sort(arr, arr + n + m);
        for(ll i : arr) cout << i << ' ';
        #endif
        cout << endl;
    }
    return 0;
}