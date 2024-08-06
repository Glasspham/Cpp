#include<bits/stdc++.h>
using namespace std;

bool Binary_search(int a[], int l, int r, int x){
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x)
            return true;
        else if (a[mid] < x)
            l = mid + 1;
        else r = mid - 1;    
    }
    return false;
}

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, X; cin >> n >> X;
        bool f = false;

        #if 1 // Set
        set<int> s;
        for(int i = 0; i < n; ++i){
            int num; cin >> num;
            s.insert(num);
        }
        for(auto it : s)
            if(s.find(X + it) != s.end())
                f = true;
        #endif
        
        #if 0 // Array
        int a[n];
        for(int &i : a) cin >> i;
        for(int i : a)
            if(Binary_search(a, 0, n - 1, X + i)) // Or available function binary_search
                f = true;
        #endif

        if(f) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}