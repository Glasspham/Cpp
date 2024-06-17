#include<iostream>
#include<set>
typedef long long ll;
using namespace std;

int main(){
    int n; cin >> n;
    ll k; cin >> k;
    ll a[n];
    for(ll &i : a) cin >> i;
    multiset<ll> ms;
    ll ans = 0;
    int l = 0, r;
    for(r = 0; r < n; ++r){
        ms.insert(a[r]);
        while(*ms.rbegin() - *ms.begin() > k){
            auto it = ms.find(a[l]);
            ms.erase(it);
            ++l;
        }
        ans += r - l + 1;
    }
    cout << ans << endl;
    return 0;
}