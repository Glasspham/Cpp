#include<iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    int i = 0, j = 0, cnt = 0;

    #if 0
    while(i < n && j < m){
        if(a[i] < b[j])
            ++i;
        else{
            cout << i << ' ';
            ++j;
        }
    }
    while(j++ < m)
        cout << n << ' ';
    #endif

    #if 1
    while(i < n && j < m){
        if(a[i] < b[j]){
            ++cnt;
            ++i;
            continue;
        }
        cout << cnt << ' ';
        ++j;
    }
    while(j < m){
        cout << n << ' ';
        ++j;
    }
    #endif
    
    return 0;
}