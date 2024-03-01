// Viết hàm tìm vị trí phần tử âm đầu tiên trong mảng
#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

int main()
{
    int nSize;
    cout << "Nhap chieu dai mang: ";
    cin >> nSize;

    srand((unsigned)time(NULL));
    vector<int> arr;
    for(int i = 0; i < nSize; i++)
    {
        int n = rand() % 100 - rand() % 100;
        arr.push_back(n);
    }

    cout << "In ra mang ban dau: " << '\n';
    for(int i : arr)
        cout << i << ' ';
    cout << endl;

    bool found = false;
    for(int i = 0; i < nSize; i++)
    {
        if(arr[i] < 0)
        {
            cout << "Vi tri phan tu am dau tien trong mang: " << i;
            found = true;
            break;
        }
    }
    if(!found == true)
        cout << "Khong co gia tri am trong mang!" << endl;
}