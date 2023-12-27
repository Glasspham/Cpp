// Viết chương trình in ra các phần tử từ 2 dãy số thực theo yêu cầu
// a.In ra những phần tử chỉ xuất hiện trong dãy a mà không xuất hiện trong dãy b.
// b.In ra những phần tử xuất hiện ở cả 2 dãy.
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

void KiemTraA(int A[], int B[], int n, int m)
{
    int j, i ,dem{0};
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            if(A[i] == B[j])
                break;
        if(j >= m)
            cout << A[i] << ' ';
    }   
}

void KiemTraB(int A[], int B[], int n, int m)
{
    bool f = true;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(A[i] == B[j])
            {
                cout << A[i] << ' ';
                f = false;
            }
    if(f)
        cout << "Mang A & B khong co phan tu giong nhau!";
}

int main()
{
    int n, m;
    
    cout << "Nhap chieu dai mang A: "; cin >> n;
    int A[n];
    NhapMang(A,n);
    cout << "Nhap chieu dai mang B: "; cin >> m;
    int B[m];
    NhapMang(B,m);

    cout << "In ra mang dau cua A & B: " << '\n';
    cout << "A: ";
    XuatpMang(A,n);
    cout << '\n' << "B: ";
    XuatpMang(B,m);

    cout << '\n' << "In ra gia tri chi co trong A:" << '\n';
    KiemTraA(A, B, n, m);
    cout << '\n';

    cout << "In ra cac gia tri co trong ca mang A & B: " << '\n';
    KiemTraB(A, B, n, m);
    cout << '\n';

    system("pause");
    return 0;
    
    
}