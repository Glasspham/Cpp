#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main(){
    ll n, s; 
    cin >> n >> s;
    ll a[n];
    for(ll &i : a) cin >> i;
    ll l = 0, r, sum = 0, ans = 0;
    for(r = 0; r < n; ++r){
        sum += a[r];
        while(sum > s){
            sum -= a[l];
            ++l;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << ' ';
    return 0;
}