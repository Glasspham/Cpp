#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        map<long long,int> mp;
        for(int i = 0; i < n; i++)
        {
            long long x; cin >> x;
            mp[x]++;
        }
        long long res, fre = INT_MIN;
        for(pair<long long,int> it : mp)
        {
            if(it.second > fre) // Nếu có thêm dấu bằng khi xét thì nó sẽ lấy key(res) lớn nhất khi có value(fre) = nhau
            {
                fre = it.second;
                res = it.first;
            }
        }
        cout << res << ' ' << fre;
    }
    return 0;
}