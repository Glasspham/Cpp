#include<iostream>
using namespace std;
int main()
{
    double math, physics, chemistry;
    cout << "Nhap diem mon toan ly hoa: ";
    cin >> math >> physics >> chemistry;
    cout << "Diem trung binh cong: " << (math + physics + chemistry) / 3 << endl;
}