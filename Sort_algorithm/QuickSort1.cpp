// Sắp xếp nhanh - Quick Sort & Hoare Partition
#include<iostream>
using namespace std; 
  
int partition(int a[], int l, int r)  
{  
    int i = l - 1, j = r + 1, pivot = a[l];
    while(true)
    {
        do
            ++i;
        while (a[i] < pivot);
      
        do
            --j;
        while (a[j] > pivot);
      
        if(i < j)
            swap(a[i], a[j]);
        else
            return j;        
    }
}  

void quickSort(int a[], int l, int r)
{
    if(l < r)
    {
        int p = partition(a, l, r);
        quickSort(a, l, p);
        quickSort(a, p + 1, r);
    }
}
  
int main()  
{  
    int a[] = {10, 5, 1, 6, 2, 7, 8, 3, 4, 9};  
    int n = sizeof(a) / sizeof(a[0]);  
    quickSort(a, 0, 9);  
    for(int i = 0; i < n; i++)
        cout << a[i] << ' '; 
}  
