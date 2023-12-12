// Viết hàm tìm vị trí của phần tử lớn nhất trong mảng các số nguyên
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

    // Tìm vị trí và giá trị âm đầu tiên trong mang
    int index_first;
    int value_first;
    for(int i = 0; i < nSize; i++)
        if(arr[i] < 0)
        {
            index_first = i;
            value_first= arr[i];
            break;
        }

    // Tìm vị trí giá trị âm lớn nhất
    int index_max = -1;
    int value_max = value_first;
    for(int i = index_first; i < nSize; i++)
        if(arr[i] < 0 && arr[i] > value_max)
        {
            value_max = arr[i];
            index_max = i;
        }
  
    if(index_max == -1) 
        cout << "Khong co so am trong mang." << endl;
    else
        cout << "Vi tri phan tu am lon nhat trong mang: " << index_max << '\n';
  
    system("pause");
    return 0;
}
