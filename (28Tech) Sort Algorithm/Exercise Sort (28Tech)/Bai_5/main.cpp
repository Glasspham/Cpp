#include<bits/stdc++.h>
using namespace std;

int find_number(int a[], int n, int x)
{
    for(int i = 0; i < n; i++)
        if(a[i] == x)
            return 1;
    return 0;
}

int main()
{
    int n, x; cin >> n >> x;
    int a[n];
    for(int &i : a)
        cin >> i;
    cout << find_number(a,n,x);
}