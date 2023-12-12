// Sắp xếp nhanh - Quick Sort & Lomuto Partition
#include<iostream>
using namespace std; 
  
int partition(int a[], int l, int r)  
{  
    int j = l - 1, pivot = a[r];
    for(int i = l; i < r; i++)
    {
        if(a[i] <= pivot)
        {
            ++j;
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
    j++;
    int tmp = a[r];
    a[r] = a[j];
    a[j] = tmp;
    return j;
}  

void quickSort(int a[], int l, int r)
{
    if(l < r)
    {
        int p = partition(a, l, r);
        quickSort(a, l, p - 1);
        quickSort(a, p + 1, r);
    }
}

int main()  
{  
    int a[] = {10, 5, 1, 6, 2, 7, 8, 3, 4, 9};  
    int n = sizeof(a)/sizeof(a[0]);  
    quickSort(a, 0, 9);  
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }  
}  