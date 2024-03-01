// Viết hàm đếm các phần tử âm, hàm đếm các phần tử dương trong mảng.
#include<iostream>
#include<time.h>
using namespace std;

void NhapMang(int a[], int n)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++)
        a[i] = rand() % 100 - rand() % 100;
}

void XuatpMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
}

void KiemTraSoLuong(int a[], int n)
{
    int DemSoDuong = 0, DemSoAm = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
            DemSoDuong ++;
        else
            DemSoAm ++;
    }

    cout << "So luong so duong co trong mang la: " << DemSoDuong << '\n';
    cout << "So luong so am co trong mang la: " << DemSoAm << '\n';
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

    KiemTraSoLuong(a,n);

    system("pause");
    return 0;
}