/*
n = 5
~~~~2
~~~242
~~24642
~2468642
2468108642
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
            cout << '~';
        int x = 2;
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            if(j < i)
            {
                cout << x;
                x += 2;
            }
            else
            {
                cout << x;
                x -= 2;
            }
        }
        cout << endl;
    }
}