#include<bits/stdc++.h>
#define Max 100
using namespace std;
// Đếm số lần xuất hiện của các phân tử trong mảng, sau đó in ra kèm với tần suất xuất hiện của nó
int main()
{
    int n; cin >> n;
    map<int,int> mp;
    // Cách 1
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;
    }
    for(auto it : mp)
        cout << it.first << ' ' << it.second << endl;

    // Cách 2
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(mp[a[i]] != 0)
        {
            cout << a[i] << ' ' << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    }
}