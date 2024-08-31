#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int dp[1001][1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int a[n + 1][m + 1];
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin >> a[i][j];

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];

    cout << dp[n][m];
    return 0;
}
