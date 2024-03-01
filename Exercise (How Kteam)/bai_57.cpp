// Viết hàm đếm số lần xuất hiện phần tử x có trong mảng
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

void SoLanXuatHien(int a[], int n)
{
    int X, Dem{0};
    bool f = true;
    cout << "Nhap gia tri muon coi: "; cin >> X;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == X)
        {
            Dem++;
            f = false;
        }    
    }
    if(f)
        cout << "Khong co gia tri " << X << " trong mang!" << '\n';

    cout << "So lan so " << X << " xuat hien trong mang la " << Dem << '\n';
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

    SoLanXuatHien(a,n);

    system("pause");
    return 0;
}