#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t; 
    while (t--)
    {
        string gray = " ",  bin; cin >> bin;
        gray[0] = bin[0];
        for(int i = 1; i < bin.size(); ++i)
            if(bin[i] == bin[i - 1])
                gray += "0";
            else gray += "1";
        cout << gray << endl;
    }
    return 0;
}