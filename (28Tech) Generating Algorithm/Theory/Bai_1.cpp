#include<bits/stdc++.h>
using namespace std;

// -Cau hinh dau tien
// -Cau hinh cuoi cung
// -Phuong phap sinh

// <Ktao cau hinh dau tien>
// while(<Khi chua phai cau hinh cuoi cung>){
// <In ra cau hinh hien tai>
// <Sinh ra cau hinh tiep theo>
// }

// Bai toan Sinh sau nhi phan co do dai n
// Neu gap 1 thi doi thanh 0 va tiep tuc luot qua den khi gap 0 thi doi thanh 1 va dung lai de in ra
// n = 3
// 000
// 001
// 010
// 011
// 100
// 101
// 110
// 111

int n, a[100], ok, k, m = 1;
void ktao()
{
    for(int i = 1; i <= n; i++)
        a[i] = 0;
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
        m++;
    }
    if(i == 0)
        ok = 0; // Cau hinh cuoi cung
    else
        a[i] = 1; // Gap gia tri khong doi lai thanh 1
}

bool check()
{
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        cnt += a[i];
    return cnt == k;
}

int main()
{
    #if 0 // In ra so nhi phan 
    cin >> n;
    ok = 1;
    ktao();
    while (ok)
    {
        for(int i = 1; i <= n; i++)
            cout << a[i];
        cout << endl;
        sinh();
    }
    cout << m;
    #endif

    #if 1 // In ra nhung so nhi phan co k gia tri 1
    cin >> n >> k;
    ok = 1;
    ktao();
    int p = 0;
    while (ok) 
    {
        if(check())
        {
            p++;
            for(int i = 1; i <= n; i++)
                cout << a[i];
            cout << endl;
        }
        sinh();
    }
    cout << p;
    #endif
    
    return 0;
}