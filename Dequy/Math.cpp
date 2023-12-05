#include "Math.h"
// Các bài toán có thể dùng đệ quy để tính

int giathua(int n) // n!
{
    if(n == 0) //Bài toán con nhỏ nhất
        return 1;
    return n * giathua(n - 1); //Hàm truy hồi 
}

int tong(int n) // s(n) = 1 + 2 + ... + n
{
    if(n == 1) //Bài toán con nhỏ nhất
        return 1;
    return n + tong(n - 1); //Hàm truy hồi 
}

int fibonacci(int n) // Viết ra số Fibonacci
{
    if(n <= 1) //Bài toán con nhỏ nhất
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2); //Hàm truy hồi 
}

int tohop(int n, int k) // nCk với n >= k
{
    if(k == 0 || k == n) //Bài toán con nhỏ nhất
        return 1;
    return tohop(n - 1, k) + tohop(n - 1, k - 1); //Hàm truy hồi 
}

int chinhhop(int n, int k) // nPk với n >= k
{
    if(k == 0) 
        return 1;
    return tohop(n,k) * giathua(k);   
}

int GCD(int a, int b) // Ước chung nhỏ nhất
{
    if(b == 0) //Bài toán con nhỏ nhất
        return a;
    return GCD(b, b/10); //Hàm truy hồi 
}

int luythua(int a, int b) // a^b
{
    if(b == 0) //Bài toán con nhỏ nhất
        return 1;
    int x = luythua(a, b / 2); //Hàm truy hồi 
    if(b % 2 == 1)
        return a * x * x;
    else
        return x * x;
}

int count(int n) // Giả sử n = 12345 thì có 5 chữ số trong n
{
    if(n < 10) //Bài toán con nhỏ nhất
        return 1;
    return 1 + count(n / 10); //Hàm truy hồi 
}

int palin(int a[], int l, int r) // Xem mảng có xứng hay không vd array[5] = 1 2 3 2 1
{
    if(l >= r)
        return 1;
    if(a[l] != a[r])
        return 0;
    return palin(a, l + 1, r - 1);
}