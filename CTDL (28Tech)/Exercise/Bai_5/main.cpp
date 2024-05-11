#include<bits/stdc++.h>
#include<array>
using namespace std;

#if 0
bool solve(){
    int n, k , t; cin >> n >> k >> t;
    int a[n];
    for(int &x : a) cin >> x;
    int b[k], c[k];
    for(int i = 0; i < k; ++i){
        b[i] = a[i];
        c[i] = a[i];
    }
    sort(b, b + k);
    for(int i = 1; i < k; ++i)
        if(b[i] - b[i - 1] <= t)
            return true;
    for(int i = k; i < n; ++i){
        for(int j = 1; j < k; ++j){
            c[j - 1] = c[j];
            b[j - 1] = c[j];
        }
        c[k - 1] = a[i];
        b[k - 1] = a[i];
        sort(b, b + k);
        for(int i = 1; i < k; ++i)
            if(b[i] - b[i - 1] <= t)
                return true;
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
#endif

#if 1
bool solve(){
    int n, k , t; cin >> n >> k >> t;
    int a[n];
    for(int &x : a) cin >> x;
    multiset<int> ms;
    for(int i = 0; i < k; ++i){
        auto it = ms.lower_bound(a[i] - t);
        if(it != ms.end() && *it <= a[i] + t)
            return true;
        ms.insert(a[i]);
    }
    for(int i = k; i < n; ++i){
        ms.erase(ms.find(a[i - k]));
        auto it = ms.lower_bound(a[i] - t);
        if(it != ms.end() && *it <= a[i] + t)
            return true;
        ms.insert(a[i]);
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
#endif