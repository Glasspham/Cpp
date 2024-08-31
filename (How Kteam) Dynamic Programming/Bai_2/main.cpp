#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int dp[1001][1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, W; cin >> n >> W;
    int w[n + 1], v[n + 1];
    for(int i = 1; i <= n; ++i) cin >> w[i];
    for(int i = 1; i <= n; ++i) cin >> v[i];

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= W; ++i)
            if(j >= w[i]) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j -w[i]] + v[i]);
            else dp[i][j] = dp[i - 1][j];
    
    int ans = 0;
    for(int i = 1; i <= W; ++i) ans = max(ans, dp[n][i]);
    cout << ans;
    return 0;
}