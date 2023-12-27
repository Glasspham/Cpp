// Viết hàm đếm các phần tử là bội của 3 hoặc 5 có trong mảng các số nguyên
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

void KT(int a[], int n)
{
    int Dem{0};
    for(int i = 0; i < n; i++)
        if(a[i] % 3 == 0 || a[i] % 5 == 0)
            Dem++;
    cout << "So phan tu la boi cua 3 hoac 5 la: " << Dem << endl;
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

    KT(a,n);

    system("pause");
    return 0;
}