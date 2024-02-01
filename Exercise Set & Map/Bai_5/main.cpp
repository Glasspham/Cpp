#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    cin.ignore();

    #if 0 // Map
    while (t--)
    {
        string str; getline(cin,str);
        map<char,int> a;
        for(char i : str)
            a[i]++;
        char res; int fre = 0;
        for(auto i : a)
            if(i.second > fre)
            {
                fre = i.second;
                res = i.first;
            }
        cout << res << endl;
    }
    #endif

    #if 0 // No using Map
    while (t--)
    {
        string str; getline(cin,str);
        int a[256] = {0};
        for(char i : str)
            a[i]++;
        char res; int fre;
        for(int i = 0; i < 256; i++)
        {
            if(a[i] > fre)
            {
                fre = a[i];
                res = (char)(i);
            }
        }
        cout << (char)(res) << endl;
    }
    #endif
    
    return 0;
}