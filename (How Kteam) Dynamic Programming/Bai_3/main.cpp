#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int dp[1001][1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, w; cin >> s >> w;
    int ns = s.size(), nw = w.size();
    s = " " + s, w = " " + w;
    for(int i = 1; i <= ns; ++i)
        for(int j = 1; j <= nw; ++j)
            if(s[i] == w[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    cout << dp[ns][nw];
    return 0;
}