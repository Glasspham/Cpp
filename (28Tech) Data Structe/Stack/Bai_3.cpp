// Next greater element
#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>tmp;
    int n; cin >> n;
    int a[n], b[n];
    for(int &i : a) cin >> i;
    for(int i = 0; i < n; ++i){
        if(tmp.empty()) tmp.push(i);
        else{
            while(!tmp.empty() && a[tmp.top()] < a[i]){
                b[tmp.top()] = a[i];
                tmp.pop();
            }
            tmp.push(i);
        }
    }
    while(!tmp.empty()){
        b[tmp.top()] = -1;
        tmp.pop();
    }
    for(int i : b) cout << i << ' ';
    return 0;
}