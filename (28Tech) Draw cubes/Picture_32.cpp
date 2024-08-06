/*
n = 5
A B C D E 
b c d e f 
C D E F G 
d e f g h 
E F G H I
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    char c = 'A', d = 'a';
    cout << "n = " << n << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i % 2 == 1)
                cout << (char)(c + i + j - 2) << ' ';
            else
                cout << (char)(d + i + j - 2) << ' ';
        }
        cout << endl;
    }
}