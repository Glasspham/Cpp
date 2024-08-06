#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;

    #if 0 // Set
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<int> a1, a2;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            a1.insert(x);
        }
        for(int i = 0; i < m; i++)
        {
            int x; cin >> x;
            a2.insert(x);
        }
        for(int i : a1)
        {
            if(a2.find(i) == a2.end())
                cout << i << ' ';
        }
    }
    #endif

    #if 0 // Map
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int,bool> a1, a2;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            a1.insert({x,true});
        }
        for(int i = 0; i < m; i++)
        {
            int x; cin >> x;
            a2.insert({x,true});
        }
        for(auto i : a1)
        {
            if(a2.find(i.first) == a2.end())
                cout << i.first << ' ';
        }
    }
    #endif

    #if 0 // No using Set and Map
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];
        for(int &x : a1) cin >> x;
        for(int &x : a2) cin >> x;
        for(int i = 0; i < n; i++)
        {
            bool f = true;
            for(int j = 0; j < m; j++)
                if(a1[i] == a2[j])
                    f = false;
            if(f) cout << a1[i] << ' ';    
        }    
    }
    #endif
    return 0;
}