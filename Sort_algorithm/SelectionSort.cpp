// Sắp xếp chọn - Selection Sort
#include<iostream>
using namespace std; 
  
void selectionSort(int a[], int n)  
{  
    for (int i = 0; i < n-1; i++)  
    {  
        int min_idx = i;  
      
        for (int j = i+1; j < n; j++)  
          if (a[j] < a[min_idx])  
              min_idx = j;

        int tmp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = tmp;
    }  
}  
  
int main()  
{  
    int a[] = {10, 5, 1, 6, 2, 7, 8, 3, 4, 9};  
    int n = sizeof(a) / sizeof(a[0]);  
    selectionSort(a, n);  
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
}  
