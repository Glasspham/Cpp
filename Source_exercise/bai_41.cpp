// Viết hàm tìm vị trí của phần tử nhỏ nhất trong mảng các số nguyên
#include <iostream>
#include<time.h>

using namespace std;

int main()
{
    int nSize;
    cout << "Nhap chieu dai mang: ";
    cin >> nSize;

    int arr[nSize], arr_sort[nSize];
    
    srand(time(NULL));
    for(int i = 1; i <= nSize; i++)
        arr[i] = rand() % 100;

    cout << "In ra mang ban dau: " << endl;
    for(int i = 1; i <= nSize; i++)
        cout << arr[i] << '\t';

    cout << endl;
    int index;
    int min = arr[0];
    for(int i = 0; i <= nSize; i++)
    {
        if(arr[i] < min)
        {
            arr[i] = min;
            index = i;
            cout << "Vi tri cua gia tri nho nhat trong mang: " << index;
        }
        
    }
}