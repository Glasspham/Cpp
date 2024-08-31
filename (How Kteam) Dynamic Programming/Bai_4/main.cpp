#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int dp[1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1], b[n + 1];
    for(int i = 1; i <= n; ++i) cin >> a[i] >> b[i];
    dp[n] = a[n];
    for(int i = n - 1; i >= 1; --i)
        dp[i] = min(dp[i + 1] + a[i], dp[i + 2] + b[i]);
    cout << dp[1];
    return 0;
}