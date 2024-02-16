// Viết hàm tính tổng các phần tử cực tiểu có trong mảng các số nguyên.
// Tiểu đại ở đây là so với 2 số 2 bên
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

void SumMinLocal(int a[], int n)
{
    int sum(0);
    if(a[0] < a[1])
        sum += a[0];
    if(a[n - 1] < a[n - 2])
        sum += a[1];
    for(int i = 1; i < n - 1; i++)
        if(a[i] < a[i - 1] && a[i] < a[i + 1])
            sum += a[i];
    cout << "Tong cac phan tu nho nhat trong cac phan tu xung quanh la: " << sum << endl;
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

    SumMinLocal(a,n);

    system("pause");
    return 0;
}
