// Sắp xếp nội - Merge Sort
#include<iostream>
using namespace std; 
  
void merge(int a[], int l, int m, int r)
{
    int n1 = m - l + 1, n2 = r - m;
    int x[n1], y[n2];

    for(int i = l; i <= m; i++)
        x[i - l] = a[i];

    for(int i = m + 1; i <= r; i++)
        y[i - m - 1] = a[i];

    int i = 0, j =0;

    while (i < n1 && j < n2)
    {
        if(x[i] <= y[j])
        {
            a[l] = x[i];
            ++l;
            ++i;
        }
        else
        {
            a[l] = y[j];
            ++l;
            ++j;
        }
    }
  
    while (i < n1)
    {
        a[l] = x[i];
            ++l;
            ++i;
    }
  
    while (j < n2)
    {
        a[l] = y[j];
            ++l;
            ++j;
    }   
}

void mergeSort(int a[], int l, int r)
{
    if(l < r)
    {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main()  
{  
    int a[] = {10, 5, 1, 6, 2, 7, 8, 3, 4, 9};  
    int n = sizeof(a) / sizeof(a[0]);  
    mergeSort(a, 0, 9);  
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';    
}  
