#include<bits/stdc++.h>
using namespace std;

void qs(int a[], int l, int r)
{
    int i = l, j = r;
    int pivot = a[r];
    while(i <= j)
    {
        while(a[i] < pivot) i++;
        while(a[j] > pivot) j--;
        if(i <= j)
        {
            swap(a[i], a[j]);
            if(i != j)
                cout << a[i] << ' ' << a[j] << endl;
            i++, j--;
        }
    }
    if(l < j) qs(a,l,j);
    if(i < r) qs(a,i,r);
}

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    qs(a, 0, n - 1);
}