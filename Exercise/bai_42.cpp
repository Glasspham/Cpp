// Viết hàm tìm vị trí của phần tử lớn nhất trong mảng các số nguyên
#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    int nSize;
    cout << "Nhap chieu dai mang: ";
    cin >> nSize;

    int a[nSize];
    srand(time(NULL));
    for(int i = 1; i <= nSize; i++)
        a[i] = rand() % 100;
    
    cout << "In ra mang ban dau: " << endl;
    for(int i = 1; i <= nSize; i++)
        cout << a[i] << ' ';
    cout << endl;

    int index;
    int max = a[0];
    for(int i = 1; i <= nSize; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            index = i;
        }            
    }
    cout << "Vi tri cua phan tu lon nhat trong mang: " << index << endl;
}



    