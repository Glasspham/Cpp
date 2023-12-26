// Viết chương trình nhập vào tọa độ 2 điểm và tính khoảng cách giữa chúng
// Trong không gian Oxy
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int A[2], B[2];
    cout << "Toa do x va y cua mot diem bang dau cach!" << endl;
    cout << "Nhap cua A: "; cin >> A[0] >> A[1];
    cout << "Nhap cua B: "; cin >> B[0] >> B[1];

    cout << "A(" << A[0] << ';' << A[1] << ")" << endl;
    cout << "B(" << B[0] << ';' << B[1] << ")" << endl;

    int toado0 = A[0] - B[0];
    int toado1 = A[1] - B[1];
    float lengthAB = sqrt(pow(toado0,2) + pow(toado1,2));
    cout << "Chieu dai A den B la: " << lengthAB << endl;

    system("pause");
    return 0;
}