#include<bits/stdc++.h>
using namespace std;

void Swap_Temp(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Sawp_Add_Subtract(int &a, int &b)
{
    a += b;
    b = a - b;
    a = a - b;
}

void Swap_Multiply_Divide(int &a, int &b)
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

    cout << "Add and Subtract:" << endl;
    Sawp_Add_Subtract(a,b);
    cout << a << ' ' << b << endl;

    cout << "Multiply and Divide:" << endl;
    Swap_Multiply_Divide(a,b);
    cout << a << ' ' << b << endl;

    cout << "XOR:" << endl;
    Swap_XOR(a,b);
    cout << a << ' ' << b << endl;

    return 0;
}
