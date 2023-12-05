// Viết hàm tìm vị trí phần tử có giá trị x xuất hiện cuối cùng có trong mảng.
#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    int nSize;
    cout << "Nhap chieu dai mang: ";
    cin >> nSize;

    int arr[nSize];

    srand((unsigned int)time(NULL));
    for(int i = 1; i <= nSize; i++)
    {
        arr[i] = rand() % 100;
    }

    for(int i = 1; i <= nSize; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;

    int x;
    cout << "Nhap gia tri can tim: ";
    cin >> x;

    for(int i = 1; i <= nSize; i++)
        if(arr[i] == x)
            cout << "Vi tri ma co cung gia tri voi x la " << i;
}