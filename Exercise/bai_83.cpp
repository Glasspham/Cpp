#include<bits/stdc++.h>

using namespace std;
// S(n) = 1 + (1.2)!/2 + (1.2.3)!/3 + ... + (1.2.3...n)!/n
int Nhap() 
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
        if(n < 0)
            cout << "Da nhap sai yeu cau! Hay nhap lai!" << endl;
    } while (n < 0);
    return n;
}

long double tinh(int &n)
{
    float s(0);
    float a(1);

    for(int i = 1; i <= n; i++)
    {
        a *= i;
        float b(1);
        
        for(int j = 1; j <= a; j++)
            b *= j;
        
        s += (b / i);
    }
    return s;
}

int main()
{
    int n = Nhap();
    cout << "Ket qua la: "<< tinh(n) << endl;

    
    return 0;
}



    
