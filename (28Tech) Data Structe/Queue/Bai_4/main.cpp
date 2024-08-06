#include<bits/stdc++.h>
using namespace std;

int solve(int s, int t){
    queue<pair<int,int>> qe; set<int> st;
    qe.push({s,0}); st.insert(s);
    while (!qe.empty()){
        pair<int,int>top = qe.front(); qe.pop();
        if(top.first == t) return top.second; // Xét trường hợp s = t từ đầu
        if(top.first * 2 == t || top.first - 1 == t) return top.second + 1; // Các trường hợp khác tới đây sẽ có KQ hết
        if(st.find(top.first * 2) == st.end() && top.first < t){
            qe.push({top.first * 2, top.second + 1});
            st.insert(top.first * 2);
        }
        if(st.find(top.first - 1) == st.end() && top.first > 1){
            qe.push({top.first - 1, top.second + 1});
            st.insert(top.first - 1);
        }
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int s, t; cin >> s >> t;
        cout << solve(s,t) << endl;
    }
    return 0;
}