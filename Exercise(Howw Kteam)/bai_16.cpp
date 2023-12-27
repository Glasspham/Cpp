// Tính n! (n>0) 
#include<iostream>
using namespace std;
int DeQuy(int n)
{
    if(n <= 1)
        return 1;
    return n * DeQuy(n - 1);
}

int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen ban muon tinh giai thua (n > 0): ";
        cin >> n;
        if(n < 0)
            cout << "Ban da nhap sai!";
    } while (n < 0);

    int accumulation(1);
    for(int i = 1; i <= n; i++)
    {
        accumulation *= i;
    }
    cout << "For:" << n << "! = " << accumulation << endl;
    cout << "De Quy:" << n << "! = " << DeQuy(n) << endl;

}