#include<bits/stdc++.h>
using namespace std;

void Swap_Temp(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Sawp_Sum(int &a, int &b)
{
    a += b;
    b = a - b;
    a = a - b;
}

void Swap_Multiplication_Division(int &a, int &b)
{
    a *= b;
    b = a / b;
    a = a / b;
}

void Swap_XOR(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a = 5, b = 8;
    cout << "Before:" << endl;
    cout << a << ' ' << b << endl;
    
    cout << "Temp:" << endl;
    Swap_Temp(a,b);
    cout << a << ' ' << b << endl;

    cout << "Sum:" << endl;
    Sawp_Sum(a,b);
    cout << a << ' ' << b << endl;

    cout << "Multiplication and Division:" << endl;
    Swap_Multiplication_Division(a,b);
    cout << a << ' ' << b << endl;

    cout << "XOR:" << endl;
    Swap_XOR(a,b);
    cout << a << ' ' << b << endl;
}