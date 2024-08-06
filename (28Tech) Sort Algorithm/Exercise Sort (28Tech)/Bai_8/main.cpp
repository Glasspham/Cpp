#include<bits/stdc++.h>
using namespace std;

int find_index_number(int a[], int n, int x)
{
    for(int i = n - 1; i >= 0; i--)
        if(a[i] == x)
            return i + 1;
    return -1;
}

int find_binary(int a[], int n, int x)
{
    int l = 0, r = n - 1, res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x)
        {
            res = mid + 1;
            l = mid + 1;
        }
        else if(a[mid] > x)
            r = mid - 1;
        else l = mid + 1;
    }
    return res;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, x; cin >> n >> x;
        int a[n]; for(int &i : a) cin >> i;
        cout << find_index_number(a,n,x) << endl;
        cout << find_binary(a,n,x) << endl;
    }   
}