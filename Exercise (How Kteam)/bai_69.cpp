/* 
Viết hàm tính tổng các phần tử là số hoàn thiện trong mảng các số nguyên.
Số hoàn thiện là n chia hết cho những số mà tổng lại bằng chính n
Ví dụ: 6 = 1 + 2 + 3
*/
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

bool KTSHT(int &n)
{
    int sum{0};
    for(int i = 1; i < n; i++)
        if(n % i == 0)
            sum += i;
    if(sum == n)
        return true;
    return false;
}

void TongSHT(int a[], int n)
{
    int sum(0);
    bool f = true;
    for(int i = 0; i < n; i++)
        if(KTSHT(a[i]))
        {
            sum += a[i];
            f = false;
        }
    if(f)
        cout << "Khong co so hoan thien trong mang!" << endl;
    else
        cout << "Tong cac phan tu la so hoan thien: " << sum << endl;
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

    TongSHT(a,n);

    system("pause");
    return 0;
}
