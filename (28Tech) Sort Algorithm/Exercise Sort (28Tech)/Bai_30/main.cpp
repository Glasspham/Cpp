#include<bits/stdc++.h>
using namespace std;

void TC()
{
    int n; cin >> n;
    vector<pair<int,int>> ve(n);
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        ve[i].first = x;
        ve[i].second = i;
    }
    sort(ve.begin(), ve.end());
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(ve[i].second != i)
        {
            swap(ve[i].first, ve[ve[i].second].first);
			swap(ve[i].second, ve[ve[i].second].second);
            if(ve[i].second != i) --i;
			    ++ans;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t; cin >> t;
    while (t--)
        TC();
    return 0;
}