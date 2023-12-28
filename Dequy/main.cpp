#include "Math.h"

int main()
{
    #if 0 // Hàm cho palin
        cout << "So phan tu trong mang: ";
        int n;
        cin >> n;
        int a[n];
        cout << "Cac gia tri trong mang la: ";
        for(int &x : a) cin >> x;
        
        if(palin(a, 0, n - 1))
            cout << "Yes";
        else
            cout << "No";
    #endif

    #if 0 // Tổ hợp
        int n,k;
        cout << "Nhap so lon truoc so nho sau!" << '\n';
        cout << "Vi nCk thi n luon >= k" << '\n';
        cout << "Gia tri cua n: ";
        cin >> n;
        cout << "Gia tri cua k: ";
        cin >> k;
        cout<<"Gia tri cua C("<<n<<","<<k<<") la: " << tohop(n,k) << '\n';
    #endif

    #if 0 // Chỉnh hợp
        int n, k; 
        cout << "Nhap so lon truoc so nho sau!" << '\n';
        cout << "Vi nCk thi n luon >= k" << '\n';
        cout<<"Gia tri cua n: ";
        cin>>n; 
        cout<<"Gia tri cua k: "; 
        cin>>k;
        cout<<"Gia tri cua P("<<n<<","<<k<<") la: " << chinhhop(n,k) << '\n'; 
    #endif

    #if 0 // Đệ quy
    int n;
    cout << "Nhap vao chieu dai day fibonacci: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
        cout << fibonacci(i) << ' ';
    #endif

    #if 0 // Tổng các giá trị trong mảng
    int n;
    cout << "Nhap vao chieu dai mang:";
    cin >> n;
    int a[n];

    srand(time(NULL));
    for(int i = 0; i < n; i++)
        a[i] = rand() % 100;

    for(int i : a)
        cout << i << ' ';
    cout << endl;

    int sum = sumarray(a, n - 1);
    cout << "Tong cua tat ca gia tri trong mang: " << sum << endl;
    #endif

    #if 1 // Tính số mũ 
    int base;
    cout << "Nhap vao co so:";
    cin >> base;
    
    int exponent;
    cout << "Nhap vao so mu";
    cin >> exponent;

    cout << "Ket qua la: " << power(base, exponent) << endl;
    #endif

    return 0;
}
