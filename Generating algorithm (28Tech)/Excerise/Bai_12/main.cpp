#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t; 
    while (t--)
    {
        string gray, bin = " "; cin >> gray;
        bin[0] = gray[0];
        for (int i = 1; i < gray.size(); i++)
        {
            if(gray[i] == '0')
                bin += bin[i - 1];
            else
            {
                if(bin[i - 1] == '0')
                    bin += "1";
                else
                    bin += "0";
            }
        }
        cout << bin << endl;
    }
    return 0;
}