// Viết chương trình xuất ra màn hình các phần tử là số nguyên tố trong mảng 1 chiều.
#include<iostream>
#include<time.h>
using namespace std;

bool KTSNT(int &n)
{
    if(n < 2)
        return false;
        for(int i = 2; i < n; i++)
            if(n % i == 0)
                return false;
    return true;
}
int main()
{
    int nSize;
    cout << "Nhap chieu dai mang: ";
    cin >> nSize;

    int arr[nSize];

    srand(time(NULL));
    for(int i = 1; i <= nSize; i++)
        arr[i] = rand() % 100;

    cout << "In ra tat ca gia tri trong mang: " << endl;
    for(int i : arr)
        cout << i << '\t';

    cout << endl;
    
    cout << "In ra cac so nguyen to trong mang \n";
    for(int i = 1; i <= nSize; i++)
        if(KTSNT(i) == true)
            cout << "a[" << i << "]= " << arr[i] << '\n';
}