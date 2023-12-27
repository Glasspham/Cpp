// Sắp xếp vun đồng - Heap Sort
#include<iostream>
using namespace std; 
  
void heap(int a[], int n, int i)
{
    int root = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if(left < n && a[left] > a[root])
        root = left;
  
    if(right < n && a[right] > a[root])
        root = right;
  
    if(root != i)
    {
        swap(a[i], a[root]);
        heap(a, n, root);
    }
}

void heapSort(int a[], int n)
{
    for(int i = n / 2 - 1; i >= 0; i--)
        heap(a, n, i);
  
    for(int i = n - 1; i > 0; i--)
    {
        swap(a[0], a[i]);
        heap(a, i, 0);
    }        
}
int main()  
{  
    int a[] = {10, 5, 1, 6, 2, 7, 8, 3, 4, 9};  
    int n = sizeof(a) / sizeof(a[0]);  
    heapSort(a, 10);  
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
       
}  
