#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int cnt[5];

int first_post(int Y[], int l, int r, int x){
    int res = -1;
    while (l <= r){
        int m = (l + r) / 2;
        if(Y[m] > x){
            res = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    return res;
}

int count(int Y[], int m, int x){
    if(x == 0)
        return 0;
    if(x == 1) // Có chỉ đúng với cặp (1,0)
        return cnt[0];
    int res = cnt[0] + cnt[1];
    // Xây dựng sẵn
    int l = first_post(Y, 0, m - 1, x);

    // Có sẵn
    // auto it = upper_bound(Y, Y + m, x);
    // res += (Y + m) - it;
    
    if(l != -1) // Tất cả các trường hợp
        res += (m - l);
    if(x == 2) // Trường hợp x = 2 mà giá trị y thuộc Y[] là các số 3 và 4 thì là trường hợp đặt biệt không thỏa x < y => x^y > y^x
        res -= (cnt[4] + cnt[3]);
    if(x == 3) // Trường hợp x = 3 thì có thêm một cặp nữa 3^2 lớn hơn 2^3
        res += cnt[2];
    return res;
}

int main(){
    int t; cin >> t;
    while (t--){
        int n, m, X[100001], Y[100001];
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            cin >> X[i];

        #if 0 // Độ phứt tạp quá cao    
        for (int i = 0; i < m; i++)
            cin >> Y[i];
        int ans = 0;
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < m; ++j)
                if(pow(X[i], Y[j]) - pow(Y[j], X[i]) > 0)
                    ++ans;
        cout << ans << endl;
        #endif

        #if 1
        for (int i = 0; i < m; i++){
            cin >> Y[i];
            if(Y[i] <= 4) ++cnt[Y[i]];
        }
        sort(Y, Y + m);
        int ans = 0;
        for(int i = 0; i < n; i++)
            ans += count(Y, m, X[i]);   
        cout << ans << endl;
        memset(cnt, 0, sizeof(cnt)); // Thuộc thư viện <cstring>
        #endif
    }
    return 0;
}