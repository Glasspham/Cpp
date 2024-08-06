#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    bool used[1000001];
    memset(used, false, sizeof(used));
    for(int i : a){
        if(used[i]){
            cout << i << endl;
            return;
        }
        used[i] = 1;
    }
    cout << "-1\n";
}

int main(){
    int t; cin >> t;
    while (t--){
        #if 0
        int n; cin >> n;
        map<int,int> mp;
        for(int i = 0; i < n; ++i){
            int num; cin >> num;
            ++mp[num];
        }
        int value, frequency = INT_MIN;
        for(auto it : mp){
            if(it.second >= frequency){
                value = it.first;
                frequency = it.second;
            }
        }
        if(frequency == 1)
            cout << -1 << endl;
        else
            cout << value << endl;
        #endif

        #if 1
        solve();
        #endif
    }
    return 0;
}