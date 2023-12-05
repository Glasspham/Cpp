#include<iostream>
using namespace std;

void Nhap(int arr[], int &n)
{
    

    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> arr[i];
    }
        
}

void Xuat(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout <<  arr[i] << ' ';
}

int main()
{
    
    int nSize;

    cout << "Nha chieu dai mang: ";
    cin >> nSize;

    int arr[nSize];
    Nhap(arr, nSize);
    Xuat(arr, nSize);

    return 0;
}