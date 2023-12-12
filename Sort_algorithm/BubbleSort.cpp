// Sắp xếp nối bọt - Bubble Sort
#include<iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1]= tmp;
            }
        }
    }
}

int main()
{
    int a[] = {10, 5, 1, 6, 2, 7, 8, 3, 4, 9};
    int n = sizeof(a)/sizeof(a[0]);
    bubbleSort(a, n);
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}