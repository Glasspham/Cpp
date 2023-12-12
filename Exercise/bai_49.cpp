// Viết hàm in tất cả phần tử trong mang là bội của 3 và 5
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

    bool found = false; // Dùng để kiểm trường hợp nếu không có giá trị thỏa mãn
    cout << "Cac phan tu trong mang la boi cua 3 va 5 la: ";
    for(int i : arr)
        if(i % 3 == 0 && i % 5 == 0)
        {
            cout << i << ' ';
            found = true;
        }
    cout << endl;

    if(!found)
        cout << "Trong man khong co phan tu nao la boi cua 3 va 5!" << endl;

    system("pause");
    return 0;
    
}