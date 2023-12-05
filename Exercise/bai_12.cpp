// Xem một số bất kì có phải là số nguyên tố không
#include <iostream>
using namespace std;

bool ktsnt(int n)
{
    if(n < 2)
        return false;
    #if 0 // Xét nếu số n chia cho tất cả số thuộc [2; n-1] mà != 0 thì là số nguyên tố và ngược lại == 0 thì không là số nguyên tố
    for(int i = 2; i < n - 1; i++)
        if(n % i == 0)
            return false;
    #endif

    #if 1 // Xét nếu số n chia cho tất cả số thuộc [2; n/2] mà != 0 thì là số nguyên tố và ngược lại == 0 thì không là số nguyên tố
    for(int i = 2; i < n / 2; i++)
        if(n / i == 0)
            return false;
    #endif
    
        return true;   
}

int main()
{
    int n;
    cout << "Nhap mot so nguyen duong: ";
    cin >> n;

    if(ktsnt(n) == true)
        cout << n << " la so nguyen to!";
    else
        cout << n << " khong phai so nguyen to!";
    cout << endl;

    
	return 0;
}
