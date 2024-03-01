// Viết hàm sắp xếp mảng theo thứ tự tăng dần của các phần tử số nguyên tố.
#include<iostream>
#include<time.h>
#include<vector>
using namespace std;

void NhapMang(vector<int>&a , int n)
{
    srand(time(NULL));
    for(int i = 0; i < n; i++)
    {
        int value = rand() % 100;
        a.push_back(value);
    }
        
}

void XuatpMang(vector<int>&a)
{
    for(int i : a)
        cout << i << ' ';
}

void HoaVi(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

bool KTSNT(int n)
{
    if(n <= 1)
        return false;
    for(int i = 2; i < n; i++)
        if(n % i == 0)
            return false;
    return true;
}

void function_sort(vector<int>&a, vector<int>&array_SNT)
{
    for(int i : a)
        if(KTSNT(i))
            array_SNT.push_back(i);

    for(int i = 0; i < array_SNT.size() - 1; i++)
        for(int j = i + 1; j < array_SNT.size(); j++)
            if(array_SNT[i] > array_SNT[j])
                HoaVi(array_SNT[i], array_SNT[j]);
}

int main()
{
    int n;
    cout << "Nhap chieu cua mang: "; cin >> n;
    vector<int>a;

    NhapMang(a,n);
    cout << "In ra mang ban dau: " << '\n';
    XuatpMang(a);
    cout << '\n';   

    vector<int>array_SNT;  
    function_sort(a,array_SNT);
    cout << "Mang da duoc sap xep theo chieu tang dan: " << '\n';
    XuatpMang(array_SNT);
    cout << '\n';   
    

    system("pause");
    return 0;
}

