#include<bits/stdc++.h>
using namespace std;
#if 0 // Using set
int main()
{
    int n, m; cin >> n >> m;
    set<int> a, b, hop, giao;
    for(int i = 0; i < n; i++)
    {
        int num; cin >> num;
        a.insert(num);
    }
    for(int i = 0; i < m; i++)
    {
        int num; cin >> num;
        b.insert(num);
    }

    for(auto it : a)
        hop.insert(it);
    for(auto it : b)
        hop.insert(it);
    for(auto it : hop)
        cout << it << ' ';
    cout << endl;

    for(auto i : a)
    {
        bool f = false;
        for(auto j : b)
            if(i == j)
            {
                f = true;
                break;
            }
        if(f)
            giao.insert(i);
    }
    for(auto it : giao)
        cout << it << ' ';
    cout << endl;
}
#endif

#if 1 // Using Merge sort
int main()
{
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    vector<int> giao, hop;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if(a[i] < b[j])
            hop.push_back(a[i++]);
        else if(a[i] > b[i])
            hop.push_back(b[j++]);
        else
        {
            giao.push_back(a[i]);
            hop.push_back(a[i]);
            ++i, ++j;
        }
    }
    while (i < n)
        hop.push_back(a[i++]);
    while (j < m)
        hop.push_back(b[j++]);
    for(int x : hop) 
        cout << x << ' ';
    cout << endl;
    for(int x : giao)
        cout << x << ' ';
    cout << endl;

    return 0;
}
#endif