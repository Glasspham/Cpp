#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, sum = 0; cin >> n;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < n; ++i){
            int num; cin >> num;
            pq.push(num);
        }
        while(pq.size() > 1){
            int top1 = pq.top(); pq.pop();
            int top2 = pq.top(); pq.pop();
            sum += top1 + top2;
            pq.push(top1 + top2);
        }
        cout << sum << endl;
    }
    return 0;
}