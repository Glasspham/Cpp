// Viết chương trình khởi tạo 1 mảng n phần tử với giá trị = 0
#include<iostream>
using namespace std;
void XuatMang(int arr[], int &n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << '\t';
}

int main()
{
    int n;
    cout << "Nhap vao chieu dai mang: ";
    cin >> n;

    int arr[n]{};
    XuatMang(arr, n);

}