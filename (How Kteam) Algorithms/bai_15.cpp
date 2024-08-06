// Viết chương trình kiểm tra số n có phải là số hoàn thiện không?
/*
 Số hoàn thiện (hay còn gọi là số hoàn chỉnh, số hoàn hảo hoặc số hoàn thành) 
 là một số nguyên dương mà tổng các ước nguyên dương của nó (số nguyên dương chia hết cho nó) bằng chính nó.
*/
#include <iostream>
using namespace std;

int TongUocSo(int &n)
{
    int sum(0);
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Nhap so nguyen duong ma muon kiem tra: ";
    cin >> n;

    if(TongUocSo(n) == n)
        cout << n << " la mot so hoan thien!" << endl;
    else    
        cout << n << " khong phai la so hoan thien!" << endl;

    
    return 0;
}