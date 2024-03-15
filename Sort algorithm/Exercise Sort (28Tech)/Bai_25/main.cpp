#include<bits/stdc++.h>
using namespace std;

#if 0 // Using function sort
int n, x, a[100005];
bool cmp(int a, int b)
{
    return abs(x - a) < abs(x - b);
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, cmp);
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}
#endif

#if 0 // Using pair
int a[100001], n, x;
bool cmp(pair<int,int>a, pair<int,int>b)
{
    if(abs(a.first - x) != abs(b.first - x))
        return abs(a.first - x) < abs(b.first - x);
    return a.second < b.second;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> x;
        pair<int,int> v[n];
        for(int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v, v + n, cmp);
        for(int i = 0; i < n; i++)
            cout << v[i].first << ' ';
        cout << endl;
    }
    return 0;
}
#endif

#if 0 // Using set, vector & pair
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, x; cin >> n >> x;
        set<pair<int,int>> a;
        for(int i = 0; i < n; i++)
        {
            int num; cin >> num;
            a.insert(make_pair(abs(x - num), num));
        }
        for(auto it : a)
            cout << it.second << ' ';
    }
    return 0;
}
#endif