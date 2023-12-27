// Sắp xếp chèn - Insertion Sort
#include<iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int index = i - 1, X = a[i];
        while(index >= 0 && a[index] >= X)
        {
            a[index + 1] = a[index];
            --index;
        }
        a[index + 1] = X;
    }
}

int main()
{
    int a[] = {10, 5, 1, 6, 2, 7, 8, 3, 4, 9};
    int n = sizeof(a) / sizeof(a[0]);
    insertionSort(a, n);
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
}
