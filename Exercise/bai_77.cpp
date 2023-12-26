// Đếm ký tự chữ a có trong chuỗi
#include<iostream>
using namespace std;

int main()
{
    string letter = " ";
    cout << "Nhap vao mot chuoi: ";
    getline(cin,letter);

    int dem(0);
    for(int i = 0; i < letter.size(); i++)
        if(letter[i] == 'a')
            dem++;
    if(dem == 0)
        cout << "Trong chuoi khong co chu a!" << '\n';
    else
        cout << "So luong chu a co trong chuoi: " << dem << '\n';

    system("pause");
    return 0;
}