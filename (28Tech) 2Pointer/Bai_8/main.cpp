#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, k; 
    cin >> n >> k;
    int a[n];
    for(int &i : a) cin >> i;
    int dem[100001] = {0}, l = 0, r, cnt = 0, ans = 0;
    for(r = 0; r < n; ++r){
        dem[a[r]]++;
        if(dem[a[r]] == 1) ++cnt;
        while(cnt > k){
            if(dem[a[l]] == 1) --cnt;
            dem[a[l]]--; ++l;
        }
        ans += r - l + 1;
    }
    cout << ans << endl;
    return 0;
}