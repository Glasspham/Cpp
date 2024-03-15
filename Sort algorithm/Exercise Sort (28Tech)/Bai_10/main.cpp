#include<bits/stdc++.h>
using namespace std;

// quicksort with lomuto partition
void PartitionLomuto(int a[], int l, int r)
{
    int pivot = a[r];
    int i = l - 1;
    for(int j = l; j < r; j++)
    {
        if(a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i],a[r]);
    for(int j = l; j <= r; j++)
    {
        if(i == j)
            cout << '[' << a[j] << "] ";
        else 
            cout << a[j] << ' ';
    }
}

// quicksort with hoare partition, pivot is the last element of segment
// not running properly
void PartitionHoare(int a[], int l, int r)
{
	int i = l, j = r, x = a[r];
	while(i <= j)
    {
		while(a[i] < x) ++i;
		while(a[j] > x) --j;
		if(i <= j){
			swap(a[i], a[j]);
			++i; --j;
		}
	}
	if(i < r) PartitionHoare(a, i, r);
	if(l < j) PartitionHoare(a, l, j);
        for (int k = l; k <= r; ++k) 
    {
        if (k == i)
            cout << "[" << a[k] << "] ";
        else
            cout << a[k] << " ";
    }
}

int main()
{
    int n; cin >> n;
    int a[n]; for(int &i : a) cin >> i;
    PartitionLomuto(a, 0, n - 1);
    cout << endl;
    PartitionHoare(a,0,n - 1);
}