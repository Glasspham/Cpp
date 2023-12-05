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

    #if 1 // Đệ quy
    int n;
    cout << "Nhap vao chi dai day fibonacci: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cout << fibonacci(i) << ' ';
    }
    #endif

    return 0;
}
