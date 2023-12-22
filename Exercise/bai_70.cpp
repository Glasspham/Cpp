/* 
Viết hàm tính giá trị trung bình các số hoàn thiện trong mảng các số nguyên.
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
        a[i] = rand() % 1000 - 1;
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

void Medium(int a[], int n)
{
    int sum(0), dem(0);
    for(int i = 0; i < n; i++)
        if(KTSHT(a[i]))
        {
            dem++;
            sum += a[i];
        }
    float average = float(sum) / float(dem);
    if(dem == 0)
        cout << "Khong co so hoan thien trong mang!" << endl;
    else
        cout << "Gia tri trung binh cac so hoan thien trong mang: " << average << endl;
}

int main()
{
    int n = 3;
    cout << "Nhap chieu cua mang: "; cin >> n;
    int a[n];

    NhapMang(a,n);
    cout << "In ra mang ban dau: " << '\n';
    XuatpMang(a,n);
    cout << '\n';   

    Medium(a,n);

    system("pause");
    return 0;
}
