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

// Bai toan Sinh tập con k phần tử của tập n phần tử
// n = 5 k = 3
// 1 2 3 
// 1 2 4 
// 1 2 5 
// 1 3 4 
// 1 3 5 
// 1 4 5 
// 2 3 5 
// 2 4 5 
// 3 4 5 

int n, k, a[100], ok, cnt = 1;
void ktao()
{
    for(int i = 1; i <= k; i++)
        a[i] = i;
}

void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;
    if(i == 0)
        ok = 0;
    else
    {
        a[i]++;
        for(int j = i + 1; i <= k; i++)
            a[j] = a[j - 1] + 1;
        cnt++;
    }
}

int main()
{
    cin >> n >> k;
    ok = 1;
    ktao();
    while (ok)
    {
        for(int i = 1; i <= k; i++)
            cout << a[i] << ' ';
        cout << endl;
        sinh();
    }
    cout << cnt;
    return 0;
}