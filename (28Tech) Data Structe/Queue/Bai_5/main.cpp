#include<bits/stdc++.h>
using namespace std;

int a[1000][1000], d[1000][1000], dx[4]={-1,0,0,1}, dy[4]={0,-1,1,0}, n, m;
pair<int,int> s, e;

void input(){
    cin >> n >> m >> s.first >> s.second >> e.first >> e.second;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];
    memset(d,0,sizeof(d));
}

int solve(){
    queue<pair<int,int>>qe;
    qe.push({s.first,s.second});
    d[s.first][s.second] = 0;
    while(!qe.empty()){
        pair<int,int> top = qe.front(); qe.pop();
        int i = top.first, j = top.second;
        for(int k = 0; k < 4; ++k){
            int i1 = i + dx[k], j1 = j + dy[k];
            if(a[i1][j1] && i1 >= 0 && i1 < n && j1 >= 0 && j1 < n){
                a[i1][j1] = 0;
                if(i1 == e.first && j1 == e.second)
                    return d[i][j] + 1;
                qe.push({i1,j1});
                d[i1][j1] = d[i][j] + 1;
            }
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        input();
        if(a[s.first][s.second] && a[e.first][e.second])
            cout << solve() << endl;
        else cout << "-1\n";
    }
    return 0;
}