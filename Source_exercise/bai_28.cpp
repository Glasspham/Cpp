// P(x , y) = x^y
#include <iostream>
#include <cmath>
using namespace std;

float NhapX() 
{
    float x;
    do
    {
        cout << "Nhap so nguyen x: ";
        cin >> x;
        if(x < 0)
            cout << "Da nhap sai yeu cau! Hay nhap lai!" << endl;
    } while (x < 0);
    return x;
}

float NhapY() 
{
    float y;
    do
    {
        cout << "Nhap so nguyen y: ";
        cin >> y;
        if(y < 0)
            cout << "Da nhap sai yeu cau! Hay nhap lai!" << endl;
    } while (y < 0);
    return y;
}


int main()
{
    float x = NhapX();
    float y = NhapY();

	cout << x << " ^ "<< y <<" = "<< pow(x, y);

    
    return 0;
}