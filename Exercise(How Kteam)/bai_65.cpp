// Viết hàm tính tổng các phần tử chia hết cho 5 có trong mảng
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

void PhanTuChiHetCho5(int a[], int n)
{
    int sum(0);
    for(int i = 0; i < n; i++)
        if(a[i] % 5 == 0)
            sum += a[i];
    cout << "Tong cac phan tu chia het cho 5 la: " << sum << endl;
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

    PhanTuChiHetCho5(a,n);

    system("pause");
    return 0;
}