#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x: a) cin >> x;
    set<int> s;
    for(int i = 0; i < k; ++i){
        if(s.count(a[i]))
            return true;
        s.insert(a[i]);
    }
    for(int i = k; i < n; ++i){
        s.erase(a[i - k]);
        if(s.count(a[i]))
            return true;
        s.insert(a[i]);
    }
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        if(solve()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}