// Viết hàm tính tổng các phần tử là số nguyên tố trong mảng.
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

bool KTSNT(int &n)
{
    if(n <= 1)
        return false;
    for(int i = 2; i <= n / 2; i++)
        if(n % i == 0)
            return false;
    return true;
}

void TongSoNT(int a[], int n)
{
    int sum(0);
    for(int i = 0; i < n; i++)
        if(KTSNT(a[i]))
            sum += a[i];
    cout << "Tong cac so nguyen co trong mang: " << sum << endl;
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

    TongSoNT(a,n);

    system("pause");
    return 0;
}