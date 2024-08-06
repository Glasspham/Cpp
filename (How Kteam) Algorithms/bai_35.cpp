// Viết chương trình nhập mảng các số nguyên và xuất các phần tử âm trong mảng
#include<iostream>
using namespace std;

void NhapMang(int arr[], int &n)
{
    
    for(int i = 0; i < n; i++)
        cin >> arr[i]; 
}

void XuatMang(int arr[], int &n)
{
    cout << "Cac gia tri so nguyen < 0: " << '\n';
    for(int i = 0; i < n; i++)
        if(arr[i] < 0)
            cout << arr[i] << ' ';
}

int main()
{
    int nSize;
    cout << "Nhap vao chieu dai man: ";
    cin >> nSize;

    int arr[nSize]{};
    NhapMang(arr, nSize);
    XuatMang(arr, nSize);
}