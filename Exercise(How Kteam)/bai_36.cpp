// Viết chương trình nhập mảng các số nguyên và xuất các phần tử lẻ có trong mảng.
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
        
    cout << "In ra cac so le trong mang \n";
    for(int i = 1; i <= nSize; i++)
        if(arr[i] % 2 != 0)
            cout << "a[" << i << "]= " << arr[i] << '\n';
}