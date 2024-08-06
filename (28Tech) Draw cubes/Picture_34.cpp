/*
n = 5
a
c b
d e f
j i h g
k l m n o
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    char c = 'a', d;
    cout << "n = " << n << endl;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 1) d = c;
        else d = c + i - 1;
        for(int j = 1; j <= i; j++)
        {
            cout << d << ' ';
            if(i % 2 == 1) ++d;
            else --d;
            c++;
        }
        cout << endl;
    }
}