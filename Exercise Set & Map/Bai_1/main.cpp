#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;

        #if 0 // Set
        set<int> s;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;
        #endif

        #if 0 // Map
        map<int, bool> mp;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            mp.insert({x, true});
        }
        cout << mp.size() << endl;
        #endif

        #if 0 // No using map and set
        int a[n];
        int count(0);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for(int i = 0; i < n; i++)
            if(a[i] != a[i - 1])
                count++;
        cout << count << endl;
        #endif

        return 0;
    }
    
}