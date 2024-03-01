// Viết hàm in các phần tử nguyên tố lớn hơn 23 trong mảng các số nguyên.
#include<iostream>
#include<time.h>
#include<vector>
using namespace std;

bool KTSNT(int n)
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

    cout << "In cac phan tu trong mang la so nguyen to va lon hon 23: ";
    for(int i : arr)
    {
        if(KTSNT(i) == true && i > 23)
            cout << i << ' ';
    }
}