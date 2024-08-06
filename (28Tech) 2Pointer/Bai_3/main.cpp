#include<iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    int i = 0, j = 0;
    long long ans = 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            ++i;
            continue;
        }
        else if(a[i] > b[j]){
            ++j;
            continue;
        }
        int cnt1 = 0, cnt2 =0;
        while(a[i] == b[j]){
            ++cnt1;
            ++i;
        }
        --i;
        while(a[i] == b[j]){
            ++cnt2;
            ++j;
        }
        ans += cnt1 * cnt2;
    }
    cout << ans << endl;
    return 0;
}