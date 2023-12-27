// Viết hàm tìm vị trí của phần tử nhỏ nhất trong mảng các số nguyên
#include <iostream>
#include<time.h>
using namespace std;

int main()
{
    int nSize;
    cout << "Nhap chieu dai mang: ";
    cin >> nSize;

    int arr[nSize];
    srand(time(NULL));
    for(int i = 1; i <= nSize; i++)
        arr[i] = rand() % 100;

    cout << "In ra mang ban dau: " << endl;
    for(int i = 1; i <= nSize; i++)
        cout << arr[i] << ' ';
    cout << endl;
    
    int index;
    int min = arr[1];
    for(int i = 1; i <= nSize; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            index = i;
        }        
    }
    cout << "Vi tri cua gia tri nho nhat trong mang: " << index;
}