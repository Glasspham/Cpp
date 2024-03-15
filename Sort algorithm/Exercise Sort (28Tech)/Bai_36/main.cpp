#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<pair<int,int>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }

        sort(begin(a), end(a), [](pair<int,int> b, pair<int,int> c){
            if(b.first != c.first) return abs(b.first) < abs(c.first);
            return b.second < c.second;
        });

        int res, sum = INT_MAX, idx;
        for(int i = 1; i < n; ++i){
            int tmp = abs(a[i].first + a[i - 1].first);
            if(tmp < sum){
                sum = tmp;
                res = a[i].first + a[i - 1].first;
                idx = min(a[i].second, a[i - 1].second);
            }
            else if(sum == tmp){
                if(idx > min(a[i].second, a[i - 1].second)){
                    res = a[i].first + a[i - 1].first;
                    idx = min(a[i].second, a[i - 1].second);
                }
            }
        }

        cout << res << endl;
    }
    return 0;
}