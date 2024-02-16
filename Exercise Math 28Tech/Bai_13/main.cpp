#include<bits/stdc++.h>
using namespace std;

int x,y,d;
void GCD(int a, int b)
{
    if(b == 0)
    {
        x = 1;
        y = 0; 
        d = a;
    }
    else
    {
        GCD(b, a % b);
        int temp = x; 
        x = y;
        y = temp - a / b * y;
    }    

}

int main()
{
    int a, b; cin >> a >> b;
    GCD(a,b);
    cout << "GCD(" << a << ',' << b << ") = " << d << endl;
    cout << x << ' ' << y << endl;
}