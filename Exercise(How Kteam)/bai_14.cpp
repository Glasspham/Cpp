// Viết chương trình đếm ước số của số nguyên dương n

// Số nguyên a chia hết cho số nguyên b thì số b được gọi là ước của số nguyên a
#include <iostream>
using namespace std;

int De_UocSo(int &n)
{
    int dem(0);
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            dem++;
    }
    return dem;
}

int main()
{
    int n;
    cout << "Nhap vao so ban xem co bao nhieu uoc: ";
    cin >> n;

    cout << "So uoc cua " << n << " la " << De_UocSo(n) << '\n';

   
    return 0;
}