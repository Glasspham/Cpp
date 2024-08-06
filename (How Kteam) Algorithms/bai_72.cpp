// Viết hàm tính giá trị trung bình các phần tử có giá trị là ước số của x trong mảng số nguyên.
#include<iostream>
#include<time.h>
using namespace std;

void NhapMang(int a[], int n)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++)
        a[i] = rand() % 100 - 1;
}

void XuatpMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
}

void averageX(int a[], int n)
{   
    int x;
    cout << "Nhap gia tri ma ban can tim uoc ben trong mang: "; cin >> x;
    int sum(0), dem(0);
    for(int i = 0; i < n; i++)
        if(a[i] % x == 0)
        {
            dem++;
            sum += a[i];
        }
    float average = float(sum) / float(dem);
    cout << "Gia tri trung binh cac so la uoc cua " << x <<" : " << average << endl;
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

    averageX(a,n);

    system("pause");
    return 0;
}