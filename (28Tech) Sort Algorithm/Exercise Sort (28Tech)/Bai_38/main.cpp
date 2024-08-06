#include<bits/stdc++.h>
using namespace std;

bool SNT(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; ++i)
        if(n % i == 0)
            return false;
    return true;
}

int main(){
    int t; cin >> t;
    while (t--){
        int N; cin >> N;
        int i = 2, tmp;
        for(; i < N; ++i){
            if(SNT(i))
                tmp = N - i;
            if(SNT(tmp))
                break;
        }
        cout << i << ' ' << tmp << endl;
    }
}