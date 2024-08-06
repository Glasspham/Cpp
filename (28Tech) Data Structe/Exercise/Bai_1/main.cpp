#include<bits/stdc++.h>
using namespace std;

#if 0 // Cách 1
int n, k, res[1001], a[1001];
void input(){
    for(int i = 0; i < n; ++i)
        cin >> a[i];
}

int solve(){
    deque<int>dq;
    long long sum = 0, tmp = 0;
    for(int i = 0; i < k; ++i){
        sum += a[i]; tmp += a[i];
        dq.push_back(a[i]);
        res[i] = a[i];
    }
    for(int i = k; i < n; ++i){
        sum += a[i] - dq.front(); dq.pop_front();
        dq.push_back(a[i]);
        if(sum > tmp){
            tmp = sum;
            for(int j = 1; j < k; ++j)
                res[j - 1] = res[j];
            res[k - 1] = a[i];
        }
    }
    return tmp;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        input(); 
        cout << solve() << endl;
        for(int i = 0; i < k; ++i)
            cout << res[i] << ' ';
        cout << endl;
    }
    return 0;
}
#endif


#if 1
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[1001];
        for(int i = 0; i < n; ++i)
            cin >> a[i];
        long long sum = 0, res, index = 0;
        for(int i = 0; i < k; ++i)
            sum += a[i];
        res = sum;
        for(int i = k; i < n; ++i){
            sum += a[i] - a[i - k];
            if(sum > res){
                res = sum;
                index = i - k + 1;
            }
        }
        cout << res << endl;
        for(int i = 0; i < k; ++i)
            cout << a[index + i] << ' ';
    }
    return 0;
}
#endif
