#include<bits/stdc++.h>
using namespace std;

int find_binary(int a[], int n, int x)
{
    sort(a, a + n);
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x) return 1;
        else if(a[mid] < x)
            l = mid + 1;
        else r = mid - 1;
    }
}

bool find_binary_cursion(int a[], int l, int r , int x)
{
    sort(a, a + r + 1);
    if(l > r) return false;
    int mid = (l + r) / 2;
    if(a[mid] == x)
        return true;
    else if(a[mid] < x)
        find_binary_cursion(a, mid + 1, r, x);
    else find_binary_cursion(a, l, mid - 1, x);
}

int main()
{
    int n, x; cin >> n >> x;
    int a[n];
    for(int &i : a)
        cin >> i;
    cout << find_binary(a,n, x) << endl; // Function normal
    cout << find_binary_cursion(a,0,n,x) << endl; // Function cursion
    cout << binary_search(a, a + n, x); // Fuction available

}