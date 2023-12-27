// Hoán đổi trực tiếp - Straight Exchange Sort
#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void straightexchangeSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] > a[j])
                swap(a[i], a[j]);
}

int main()
{
    int a[] = {10, 5, 1, 6, 2, 7, 8, 3, 4, 9};
    int n = sizeof(a)/sizeof(a[0]);
    straightexchangeSort(a, n);
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}
