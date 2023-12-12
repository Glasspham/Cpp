// Viết hàm tính vị trí phần tử dương bé nhất trong mảng.
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

    // Tìm vị trí và giá trị của phần tử đầu tiên trong mảng
    int index_first;
    int value_first;
    for(int i = 0; i < nSize; i++)
    {
        if(arr[i] > 0)
        {
            index_first = i;
            value_first = arr[i];
            break;
        }
    }

    int index_min = -1;
    int value_min = value_first;
    // Tìm giá trị dương nhỏ nhất có trong mảng
    for(int i = index_first; i < nSize; i++)
    {
        if(arr[i] < value_min && arr[i] > 0)
        {
            value_min = arr[i];
            index_min = i;
        }
    }

    if(index_min == -1)
        cout << "Khong co gia tri duong trong mang!" << endl;
    else
        cout << "Vi tri co gi tri duong va nho nhat la: " << index_min << endl;

    system("pause");
    return 0;

}