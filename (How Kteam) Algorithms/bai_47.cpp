// Viết hàm tìm vị trí phần tử dương đầu tiên trong mảng
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int nSize;
    cout << "Nhap chieu dai mang: ";
    cin >> nSize;

    int arr[nSize];
    srand((unsigned)time(NULL));
    for(int i = 0; i < nSize; i++)
        arr[i] = rand() % 100 - rand() % 100;

    cout << "In ra mang ban dau: " << endl;
    for(int i : arr)
        cout << i << ' ';
    cout << endl;

    int index;
    for(int i = 0; i < nSize; i++)
    {
        if(arr[i] > 0)
        {
            index = i;
            break;
        }
        else 
            index = -1;
    }

    cout << "Gia tri duong dau tien trong mang: " << index << endl;
     
    if(index == -1)
        cout << "Khong co gia tri duong trong mang! " << endl;
    else
        cout << "Gia tri duong dau tien trong mang: " << index << endl;

    return 0;
}