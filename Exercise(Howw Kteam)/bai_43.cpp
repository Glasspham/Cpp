// Viết hàm in các phần tử nguyên tố trong mảng các số nguyên
#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

bool KTSNT(int &n)
{
    if(n <= 1)
        return false;
    for(int i = 2; i < n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main()
{
    int nSize;
    cout << "Nhap chieu dai mang: ";
    cin >> nSize;

    srand(time(NULL));
    vector<int> arr;
    for(int i = 1; i <= nSize; i++)
    {
        int n = rand() % 100;
        arr.push_back(n);
    }
        
    cout << "In ra mang ban dau: " << '\n';
    for(int i : arr)
        cout << i << ' ';
    cout << endl;

    cout << "Cac so trong mang la so nguyen to: ";
    for(int i : arr)
    {
        if(KTSNT(i) == true)
            cout << i << ' ';
    }
}