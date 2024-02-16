// Viết hàm tính tổng các phần tử nằm ở vị trí chẵn trong mảng các số nguyên.
#include<iostream>
#include<time.h>
using namespace std;

void NhapMang(int a[], int n)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++)
        a[i] = rand() % 100;
}

void XuatpMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
}

void TongVTChan(int a[], int n)
{
    int sum(0);
    for(int i = 0; i < n; i += 2)
        sum += a[i];
    cout << "Tong cac phan tu o vi tri chan la: " << sum << endl;
}

int main()
{
    int n;
    cout << "Nhap chieu cua mang: "; cin >> n;
    int a[n];

    NhapMang(a,n);
    cout << "In ra mang ban dau: " << '\n';
    XuatpMang(a,n);
    cout << '\n';   

    TongVTChan(a,n);

    system("pause");
    return 0;
}