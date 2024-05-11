#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        string s; cin >> s;
        map<char,int> mp;
        priority_queue<int>tmp;
        for(char c : s)
            mp[c]++;
        for(auto it : mp)
            tmp.push(it.second);
        while(k > 0){
            int top = tmp.top(); tmp.pop();
            --top; --k;
            tmp.push(max(top,0));
        }
        long long ans = 0;
        while(!tmp.empty()){
            ans += 1ll * tmp.top() * tmp.top();
            tmp.pop();
        }
        cout << ans << endl;
    }
    return 0;
}