// Viết hàm tìm số chẵn cuối cùng có trong mảng
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

    for(int i = nSize - 1; i >= 0; i--)
    {
        if(arr[i] % 2 == 0)
            {
                cout << i << endl;
                break;
            }
    }
}