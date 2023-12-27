// Viết hàm sắp xếp mảng theo thứ tự giảm dần.
#include<iostream>
#include<time.h>
#include<algorithm>
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

void HoaVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void function_sort(int a[], int n)
{
    int max = a[0];
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] < a[j])
                HoaVi(a[i],a[j]);
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

    #if 0 // Dùng hàm tự viết 
    function_sort(a,n);
    #endif
    #if 0 // Dùng hàm có sẵn từ thư viện algorithm
    sort(a, a + n, greater<int>());
    #endif
    cout << "Mang da duoc sap xep theo chieu giam dan: " << '\n';
    XuatpMang(a,n);
    cout << '\n';   
    

    system("pause");
    return 0;
}