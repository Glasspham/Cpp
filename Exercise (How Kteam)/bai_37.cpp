// Viết chương trình nhập vào mảng một chiều các số nguyên và xuất ra các phần tử chẵn < 20
#include<iostream>
using namespace std;
int main()
{
    int nSize;
    cout << "Nhap chieu dai mang: ";
    cin >> nSize;

    int arr[nSize];
    for(int i = 1; i <= nSize; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> arr[i];
    }
        
    cout << "In ra cac so chan va nho hon 20 trong mang \n";
    for(int i = 1; i <= nSize; i++)
        if(arr[i] % 2 == 0 && arr[i] < 20)
            cout << "a[" << i << "]= " << arr[i] << '\n';
}