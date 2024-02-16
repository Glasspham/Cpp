// Viết hàm tính tổng các phần tử chẵn trong mảng.
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

void TongSoChan(int a[], int n)
{
    int sum{0};
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0)
            sum += a[i];
    cout << "Tong cac so chan trong mang la: " << sum << endl;
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

    TongSoChan(a,n);

    system("pause");
    return 0;
}