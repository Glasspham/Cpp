#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,b; cin >> n >> k >> b;
    int a[100001] = {0};
    for(int i = 0; i < b; ++i){
        int x; cin >> x;
        a[x] = 1;
    }
    
    int cnt = 0;
    for(int i = 0; i < k; ++i)
        if(a[i] == 1)
            ++cnt;
    // Đoạn trên từ "int cnt = 0;" có thể thay bằng "int cnt = accumulate(a + 1, a + k + 1, 0);"        
    int ans = cnt;
    for(int i = k; i < n; ++i){
        cnt += a[i] - a[i - k];
        ans = min(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}