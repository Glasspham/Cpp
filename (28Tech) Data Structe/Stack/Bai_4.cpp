// Maximum Rectangular Area In Histogram 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n], res = INT_MIN;
    for(int &i : a) cin >> i;
    stack<int> tmp;
    int i = 0;
    while (i < n){
        if(tmp.empty() || a[i] >= a[tmp.top()]){
            tmp.push(i);
            ++i;
        }
        else{
            int idx = tmp.top();
            tmp.pop();
            if(tmp.empty()) res = max(res, a[idx] * i);
            else res = max(res, a[idx] * (i - tmp.top() - 1));
        }
    }
    while(!tmp.empty()){
        int idx = tmp.top();tmp.pop();
        if(tmp.empty()) res = max(res, a[idx] * i);
        else res = max(res, a[idx] * (i - tmp.top() - 1));
    }
    cout << res << ' ';
    return 0;
}