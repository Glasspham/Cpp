// Tìm ước số chung lớn nhất và bội số chung nhỏ nhất của a và b
#include<iostream>
using namespace std;

int UCLN(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int BCNN(int a, int b)
{
    int result = (a * b) / UCLN(a,b);
    return result; 
}

int main()
{
    int a,b;
    cout << "Nhap 2 gia tri can tinh UCLN va BCNN: ";
    cin >> a >> b;

    cout << "Ket qua UCLN(" << a << ',' << b << ") = " << UCLN(a,b) << '\n';
    cout << "Ket qua BCNN(" << a << ',' << b << ") = " << BCNN(a,b) << '\n';
}