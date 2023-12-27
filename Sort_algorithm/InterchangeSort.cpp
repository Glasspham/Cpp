// Sắp xếp đổi chỗi trực tiếp - Interchange Sort
#include<iostream>
using namespace std;

void interchangeSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

int main()
{
    int a[] = {10, 5, 1, 6, 2, 7, 8, 3, 4, 9};
    int n = sizeof(a) / sizeof(a[0]);
    interchangeSort(a, n);
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
}
