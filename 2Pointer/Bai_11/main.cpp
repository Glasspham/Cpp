#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int BNS(vector<pair<int, int>> a, int x){
    int l = 0, r = a.size() - 1;
    while (l <= r){
        int m = (l + r) / 2;
        if(a[m].first == x)
            return m;
        else if(a[m].first > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

int main(){
    int n, x; cin >> n >> x;
    vector<pair<int,int>>a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    int l = 0, r = n - 1;
    while (l < r){
        int sum = a[l].first + a[r].first;
        if(sum == x){
            cout << a[l].second + 1 << ' ' << a[r].second + 1 << endl;
            return 0;
        }
        if(sum > x)
            --r;
        else
            --l;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}