// Viết chương trình phát sinh ngẫu nhiên mảng 1 chiều các số nguyên tăng dần (không sắp xếp)
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void NhapMang(int arr[], int &n)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++)
    {
        arr[i] = arr[i - 1] + rand() % 100 + 1;
    }
}

void XuatMang(int arr[], int &n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}

int main()
{
    int nSize;
    cout << "Nhap chieu dai cua mang: ";
    cin >> nSize;

    int arr[nSize]{};
    NhapMang(arr, nSize);
    XuatMang(arr, nSize);
}