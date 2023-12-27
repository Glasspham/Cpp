#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>
using namespace std;

/*
Thuật toán Euclid này sử dụng vòng lặp while để tính ước chung lớn nhất của a và b.

Trong khi a khác b, nó sẽ liên tục trừ số lớn hơn cho số nhỏ hơn cho đến khi a bằng b

(điều này xảy ra khi chúng đã có cùng giá trị là ước chung lớn nhất).
*/
int UCLN1(int a, int b)
{
    while (a != b)
    {
        if(a > b)
            a = a - b; // Ghi cách khác là a -= b
        else
            b = b - a; // Ghi cách khác là b -= a
    }
    return a; // or return b; a = b   
}
/*
Lưu ý:

Phương pháp UCLN không hiệu quả với các số lớn do việc trừ lặp lại có thể mất nhiều thời gian tính toán. 

Phương pháp tốt hơn để tìm ước chung lớn nhất là sử dụng thuật toán Euclid, là UCLN2. 

Đây là cách mà thuật toán Euclid hoạt động nhanh hơn và hiệu quả hơn trong việc tìm ước chung lớn nhất của hai số.
*/

/*
Thuật toán Euclid này sử dụng vòng lặp while để lặp lại việc chia cho đến khi số thứ hai trở thành 0.

Trong mỗi lần lặp, nó thực hiện việc gán số thứ hai cho phần dư của phép chia a cho b, sau đó đổi chỗ a và b để tiếp tục lặp. 

Khi b trở thành 0, a sẽ chính là ước chung lớn nhất của a và b.
*/
int UCLN2(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Tính ước chung lớn nhất của hai số nguyên dương a và b bằng phân tích số nguyên thành tích các số nguyên tố
// Hàm phân tích số nguyên thành tích các số nguyên tố và lưu vào một unordered_map
void primeFactorization(int n, unordered_map<int, int>& factors) {
    int divisor = 2;
    while(n > 1) 
    {
        if(n % divisor == 0) 
        {
            factors[divisor]++;
            n /= divisor;
        } 
        else 
        {
            divisor++;
        }
    }
}

// Hàm tính ước chung lớn nhất của hai số nguyên dương a và b bằng phân tích số nguyên thành tích các số nguyên tố
int UCLN3(int a, int b) {
    unordered_map<int, int> factorsA, factorsB;

    // Phân tích số nguyên thành tích các số nguyên tố
    primeFactorization(a, factorsA);
    primeFactorization(b, factorsB);

    int gcd = 1;

    // Tìm ước chung lớn nhất từ các số nguyên tố chung
    for(auto& factor : factorsA) 
    {
        int prime = factor.first;
        if(factorsB.find(prime) != factorsB.end()) 
        {
            gcd *= pow(prime, min(factorsA[prime], factorsB[prime]));
        }
    }
    return gcd;
}

// BCNN ta lấy a nhân b rồi chia cho kết quả của UCLN
int BCNN(int a, int b)
{
    int result = UCLN1(a, b);
    return (a * b) / result;
}

int main()
{
    int a,b;
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "UCLN1(" << a << ',' << b << ") = " << UCLN1(a, b) << '\n';

    cout << "UCLN2(" << a << ',' << b << ") = " << UCLN2(a, b) << '\n';

    cout << "UCLN3(" << a << ',' << b << ") = " << UCLN3(a, b) << '\n';

    cout << "BCNN(" << a << ',' << b << ") = " << BCNN(a, b) << '\n';

    
    return 0;
}
