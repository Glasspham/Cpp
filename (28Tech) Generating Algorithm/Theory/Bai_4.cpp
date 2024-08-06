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

// Bai toan Sinh phân hoạch nguyên của số tự nhiên n (Cách phân tích n dưới dạng tổng các số tự nhiên không vượt quá n)
// n = 5
// 5
// 4 1
// 3 2
// 3 1 1
// 2 2 1
// 2 1 1 1
// 1 1 1 1 1

int n, cnt, a[100], ok;
void ktao()
{
    cnt = 1;
    a[1] = n;
}

void sinh()
{
    int i = cnt;
    while (i >= 1 && a[i] == 1)
        i--;
    if(i == 0)
        ok = 0;
    else
    {
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        if(q)
        {
            for(int j = 1; j <= q; j++)
            {
                cnt ++;
                a[cnt] = a[i];
            }
        }
        if(r)
        {
            cnt++;
            a[cnt] = r;
        }
    }
}

int main()
{
    cin >> n;
    ktao();
    ok = 1;
    while (ok)
    {
        for(int i = 1; i <= cnt; i++)
            cout << a[i] << ' ';
        cout << endl;
        sinh();
    }
    return 0;
}