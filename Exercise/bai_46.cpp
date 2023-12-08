// Viet ham tim vi tri phan tu am lon nhat trong mang.
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
    for(int i = 0; i < nSize; i++)
        cout << arr[i] << ' ';
    cout << endl;

    // Tìm giá trị nhỏ nhất trong mảng
    int value_min = arr[0];
    for(int i = 0; i < nSize; i++)
    {
        if(arr[i] < value_min)
        {
            value_min = arr[i];
        }
    }

    // Xét xem giá trị nào lớn hơn min
    int index_max;
    int value_max = value_min;
    for(int i = 0; i < nSize; i++)
    {
        if(arr[i] < 0 && arr[i] > value_max)
        {
            value_max = arr[i];
            index_max = i;
        }
    }
    cout << "Vi tri phan tu am lon nhat trong mang: " << index_max << '\n';
    system("pause");
    return 0;
}