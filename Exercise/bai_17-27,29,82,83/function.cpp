#include "header.h"

int Nhap() 
{
    int n;
    do
    {
        cout << "Nhap so nguyen duong: ";
        cin >> n;
        if(n < 0)
            cout << "Da nhap sai yeu cau! Hay nhap lai!" << endl;
    } while (n < 0);
    return n;
}

#if 1 // Các function toán học dùng vòng lặp For()

long tinhTichLe(int &n) // bai 17
{
    int accumulation(1);
    for(int i = 0; i <= n; i++)
    {
        accumulation *= (2 * i + 1);
    }
    return accumulation;
}

long tinhTongLe(int &n) // bai 18
{
    int sum(0);
    for(int i = 0; i <= n; i++)
        sum += (2 * i + 1);
    return sum;
}

long tinhLeduongChanam(int &n) // bai 19
{
    int sumLe(0), sumCham(0);
    for(int i = 1; i <= n; i++ )
    {
        if(i % 2 == 0)
            sumCham += (i * (-1));
        else
            sumLe += i;
    }
    return sumCham + sumLe;
}

long tinhTongTichLap(int &n) // bai 20
{
    int sum(0);
    int accumulation(1);
    for(int i = 1; i <= n; i++)
    {
        accumulation *= i;
        sum += accumulation;
    }
    return sum;
}

long tinhTongBinhPhuong(int &n) // bai 21
{
    int sum(0);
    for(int i = 1; i <= n; i++)
        sum += pow(i, 2);
    return sum;
}

long double tinTongMotPhan(int &n) // bai 22
{
    double sum(0);
    for(double i = 1; i <= n; i++)
        sum += (1 / i);
    return sum;
}

long tinhTongNmuN(int &n) // bai 23
{
    int sum(0);
    for(int i = 1; i <= n; i++)
        sum += pow(i,i);
    return sum;
}

long double tinhTongTuNhoHonMau(int &n) // bai 24
{
    double sum(0);
    for(double i = 1; i <= n; i++)
        sum += (i / (i + 1));
    return sum;
}

long double tinhTongMotPhanGiaThua(int &n) // bai 25
{
    long double sum(0);
    for(double i = 1; i <= n; i++)
        {   
            double accumulation(1);
            for(double j = 1; j <= i; j++)
                accumulation *= j;

            sum += (1/ accumulation);
        }
    return sum;
}

long double tinhTong_26(int &n) // bai 26
{
    float sum(0);
    float sum_new(0);
    double accumulation(1);

    for(int i = 1; i <= n; i++)
    {
        sum += i;
        accumulation *= i;

        sum_new += (double(sum) / accumulation);
    }
    return sum_new;
}

long double tinhTong_27(int &n) // bai 27
{
    int sum(0);
    double sum_new(0);
    for(int i = 1; i <= n; i++)
    {
        sum += i;
        sum_new += (double(1) / sum);
    }
    return sum_new;
}

long tinhTongCuaTongKeTiep(int &n) // bai 29
{
    int sum(0);
    int sum_new(0);
    for(int i = 1; i <= n; i++)
    {
        sum += i;
        sum_new += sum;
    }
    return sum_new;
}

long double tinhTong_82(int &n) // bai 82
{
    double sum(0);
    for(double i = 1; i <= n; i++) // n == i
    {
        double accumulation(1);
        double a(1);
        double b(1);
        double c(1);
        
        // Tính (-1)^(n-1)
        a = pow(-1, i-1);

        // Tính (n-1)!
        for(double j = 1; j <= i - 1; j++)
            b *= j;

        // Tính 2^(-n)    
        c = pow(2, -i);

        accumulation = a * b * c;
        sum += accumulation;    
    }
    return sum;
}

long double tinhTong_83(int &n) // bai 83
{
    float s(0);
    float a(1);

    for(int i = 1; i <= n; i++)
    {
        a *= i;
        float b(1);
        
        for(int j = 1; j <= a; j++)
            b *= j;
        
        s += (b / i);
    }
    return s;
}

#endif

#if 0 // Các function toán học dùng Đệ Quy

long tinhTich(int &n) // bai 17
{
    
}

long tinhTong(int &n) // bai 18
{
    
}

long tinhLeduongChanam(int &n) // bai 19
{
    
}

long tinhTichLap(int &n) // bai 20
{
   
}

long tinhTongBinhPhuong(int &n) // bai 21
{
    
}

long tinh(int &n) // bai 22
{

}

// long tinh(int &n) // bai 23
// {

// }

// long tinh(int &n) // bai 24
// {

// }

// long tinh(int &n) // bai 25
// {

// }

// long tinh(int &n) // bai 26
// {

// }

// long tinh(int &n) // bai 27
// {

// }

// long tinh(int &n) // bai 28
// {

// }

// long tinh(int &n) // bai 29
// {

// }

#endif