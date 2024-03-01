// Viết chương trình phát sinh ngẫu nhiên mảng 1 chiều các số nguyên âm
#include<iostream>
#include<cstdlib> // for srand() and rand()
#include<ctime> //for time()
using namespace std;

void NhapMang(int arr[], int &n)
{   
    srand(time(NULL));
    for(int i = 0; i < n; i++)
        arr[i] = rand() * -1;
}

void XuatMang(int arr[], int &n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}

int main()
{
    int n;
    cout << "Nhap vao chieu dai mang: ";
    cin >> n;

    int arr[n]{};
    NhapMang(arr, n);
    XuatMang(arr, n);
}