/*
n = 5
    1
   22
  333
 4444
55555
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j >= n - i + 1)
                cout << i;
            else
                cout << ' ';
        }
        cout << endl;
    }
}