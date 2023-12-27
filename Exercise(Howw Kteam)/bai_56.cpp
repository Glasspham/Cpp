// Viết hàm đếm các phần tử chẵn, hàm đếm các phần tử lẻ trong mảng.
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

void TinhChanLe(int a[], int n)
{
    int DemChan{0}, DemLe{0};
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            DemChan ++;
        else
            DemLe ++;
    }

    cout << "So luong so chan trong mang la: " << DemChan << '\n';
    cout << "So luong so le trong mang la: " << DemLe << '\n';
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

    TinhChanLe(a,n);

    system("pause");
    return 0;
}