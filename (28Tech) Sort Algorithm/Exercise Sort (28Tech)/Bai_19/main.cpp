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
            int x; cin >> x;
            a.insert(x);
        }
        while (a.size() > 0)  
        {
            auto it_max = max_element(a.begin(),a.end()); // auto == set<int>::iterator
            auto it_min = min_element(a.begin(),a.end());
            if(*it_max == *it_min)
            {
                cout << *it_max << " ";
                a.erase(*it_max);
            }
            else
            {
                cout << *it_max << " ";
                cout << *it_min << " ";
                a.erase(*it_max);
                a.erase(*it_min);
            }
        }
        #endif

        #if 0 // Array
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a + n);
        int l = 0 , r = n - 1;
        while (l <= r)
        {
            if(l == r)
            {   
                cout << a[l];
                break;
            }
            else
            {
                cout << a[r] << ' ' << a[l] << ' ';
                r--, l++;
            }    
        }
        #endif
        
    }
    
}