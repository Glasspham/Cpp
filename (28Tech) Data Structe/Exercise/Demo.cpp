/*
Tính tổng cửa sổ trượt có độ dài k trong mảng a[] gồm n phần tử
Ví dụ: 
6 3
4 3 1 2 8 6
Tổng = (4 + 3 + 1) + (3 + 1 + 2) + (1 + 2 + 8) + (2 + 8 + 6) = 41
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    deque<int> tmp;
    int sum_tmp = 0, res = 0;
    for(int i = 0; i < k; ++i){
        sum_tmp += a[i];
        tmp.push_back(a[i]);
    }
    res += sum_tmp;
    for(int i = k; i < n; ++i){
        sum_tmp += a[i] - tmp.front(); tmp.pop_front();
        tmp.push_back(a[i]);
        res += sum_tmp;
    }
    cout << res << endl;
    return 0;
}