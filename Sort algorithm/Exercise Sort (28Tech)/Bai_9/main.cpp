#include<bits/stdc++.h>
using namespace std;

int find_indexfirst(int a[], int n, int x)
{
    for(int i = 0; i < n; i++)
        if(a[i] == x)
            return i + 1;
    return -1;
}

int find_indexend(int a[], int n, int x)
{
    for(int i = n - 1; i >= 0; i--)
        if(a[i] == x)
            return i + 1;
    return -1;
}

int find_binary_indexfirst(int a[], int n, int x)
{
    int l = 0, r = n - 1, res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x)
        {
            res = mid + 1;
            r = mid - 1;
        }
        else if(a[mid] > x)
            r = mid - 1;
        else l = mid + 1;
    }
    return res;
}

int find_binary_indexend(int a[], int n, int x)
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

int quantity_number(int a[], int n, int x)
{
    int first = find_indexfirst(a,n,x);
    int end = find_indexend(a,n,x);
    if(first == -1)
        return 0;
    else
        return end - first + 1;
}

int quantity_number_binary(int a[], int n, int x)
{
    int first = find_binary_indexfirst(a,n,x);
    int end = find_binary_indexend(a,n,x);
    if(first == -1)
        return 0;
    else
        return end - first + 1;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, x; cin >> n >> x;
        int a[n]; for(int &i : a) cin >> i;
        cout << quantity_number(a,n,x) << endl;
        cout << quantity_number_binary(a,n,x);
    }   
}