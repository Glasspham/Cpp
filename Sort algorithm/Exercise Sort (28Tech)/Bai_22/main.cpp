#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        ll n, m; cin >> n >> m;
        ll a[n], b[m];
        for(ll &x : a) cin >> x;
        for(ll &x : b) cin >> x;
        ll value_max = *max_element(a, a + n);
        ll value_min = *min_element(b, b + m);
        cout << value_max * value_min << endl;
    }
    return 0;
}