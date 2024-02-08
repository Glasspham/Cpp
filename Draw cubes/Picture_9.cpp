/*
n = 5
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/
#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    cout << "n = " << n << endl;

    for(int i = 1; i <= n; i++)
    {
        int cnt = i;
        for(int j = 1; j <= (2 * n - 1); j++)
        {
            if(j >= (n - i + 1) && j <= (n + i - 1))
            {
                if(j == n)
                    cout << cnt--;
                else if(j < n)
                    cout << cnt++;
                else
                    cout << cnt--;
                cout << ' ';
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}