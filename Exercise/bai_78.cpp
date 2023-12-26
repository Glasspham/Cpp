// Viết chương trình nhập vào 2 chuỗi ký tự str1 và str2
#include<iostream>
using namespace std;

int main()
{
    string letter1 = " ";
    cout << "Nhap vao chuoi thu 1: ";
    getline(cin,letter1);

    string letter2 = " ";
    cout << "Nhap vao chuoi thu 2: ";
    getline(cin,letter2);

    if(letter1.size() < letter2.size())
    {
        cout << "Chuoi 2 dai hon chuoi 1" << '\n';
        cout << letter2 << ' ' << letter1 << '\n';
    }  
    else if(letter1.size() > letter2.size())
    {
        cout << "Chuoi 1 dai hon chuoi 2" << '\n';
        cout << letter1 << ' ' << letter2 << '\n';
    }
    else
        cout << "Chuoi 2 bang chuoi 1" << '\n';
        

    system("pause");
    return 0;
}