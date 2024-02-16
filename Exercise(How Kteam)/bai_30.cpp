// Xuất ra dãy số fibonacai
#include<stdio.h>
using namespace std;
int fibonacci(int n)
{
    if(n <= 1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

#include <stdio.h>

int main() {
    int n;

    printf("Nhap chieu dai day Fibonacci: ");
    scanf("%d", &n);

    printf("Day Fibonacci voi %d phan tu la: \n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}
