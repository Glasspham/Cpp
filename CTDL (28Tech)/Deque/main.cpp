// Sliding window maximum problems
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &i : a) cin >> i;
    deque<int> dp;
    for(int i = 0; i < k; ++i){
        while(!dp.empty() && a[i] > a[dp.back()])
            dp.pop_back();
        dp.push_back(i);
    }
    cout << a[dp.front()] << ' ';
    for(int i = k; i <= n - 1; ++i){
        if(dp.front() <= i - k)
            dp.pop_front();
        while(!dp.empty() && a[i] > a[dp.back()])
            dp.pop_back();
        dp.push_back(i);
        cout << a[dp.front()] << ' ';
    }
    return 0;
}