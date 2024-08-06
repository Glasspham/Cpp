#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a.begin(),a.end(),[](pair<int,int> a, pair<int,int> b){return a.second < b.second;});
    int tmp = a[0].second;
    int ans = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i].first > tmp)
        {
            ans++;
            tmp = a[i].second;
        }
    }
    cout << ans << endl;
}