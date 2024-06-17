#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main(){
    ll n, s; 
    cin >> n >> s;
    ll a[n];
    for(ll &i : a) cin >> i;
    ll l = 0, r, sum = 0, ans = INT_MAX;
    for(r = 0; r < n; ++r){
        sum += a[r];
        while(sum >= s){
            ans = min(ans, r - l + 1);
            sum -= a[l]; ++l;
        }
    }
    cout << ans << ' ';
    return 0;
}