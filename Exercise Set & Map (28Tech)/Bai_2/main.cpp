#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;

        #if 0 // Set
        set<int> a;
        for(int i = 0; i < n; i++)
        {
            int x;cin >> x;
            a.insert(x);
        }      
        int q; cin >> q;
        for(int i = 0; i < q; i++)
        {
            int x; cin >> x;
            if(a.find(x) != a.end())
                cout << "YES \n";
            else
                cout << "NO \n";
        }
        #endif

        #if 0 // Map
        map<int,bool> mp;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            mp.insert({x,true});
        }
        int q; cin >> q;
        while (q--)
        {
            int x; cin >> x;
            if(mp.find(x) != mp.end())
                cout << "YES \n";
            else cout << "NO \n";
        }
        #endif

        #if 0 // No using Set and Map
        int a[n];
        for(int &x : a)
            cin >> x;
        sort(a, a + n);
        int q; cin >> q;
        while (q--)
        {
            int x; cin >> x;
            if(binary_search(a,a + n, x))
                cout << "YES \n";
            else cout << "NO \n";
        }
        #endif

        #if 0 // No using Set and Map and binary_search
        int a[n];
        for(int &x : a)
            cin >> x;
        int q; cin >> q;
        while (q--)
        {
            int x; cin >> x;
            bool f = true;
            for(int i : a)
                if(i == x)
                {
                    cout << "YES \n";
                    f = false;
                    break; // Giúp trường hợp trong một mảng có 2 phần tử cùng giá trị với x
                }
            if(f)   
                cout << "NO \n";
        }
        #endif
    }
    return 0;
}