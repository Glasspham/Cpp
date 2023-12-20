// Viết hàm đếm các phần tử nhỏ hơn x trong mảng.
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

void SoLuongPhanTuNhoHonX(int a[], int n)
{
    int X, Dem{0};
    bool f = true;
    cout << "Nhap gia tri muon coi: "; cin >> X;

    for(int i = 0; i < n; i++)
    {
        if(a[i] < X)
        {
            Dem++;
            f = false;
        }    
    }
    if(f)
        cout << "Khong co gia tri trong mang thoa man!" << '\n';

    cout << "So phan tu nho hon " << X << " co trong mang la " << Dem << '\n';
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

    SoLuongPhanTuNhoHonX(a,n);

    system("pause");
    return 0;
}