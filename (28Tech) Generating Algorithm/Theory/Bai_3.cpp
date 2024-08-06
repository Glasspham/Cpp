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

// Bai toan Sinh hoan vi n phan tu
/*
5
1 2 3 4 5 
1 2 3 5 4 
1 2 4 3 5 
1 2 4 5 3 
1 2 5 3 4 
1 2 5 4 3 
1 3 2 4 5 
1 3 2 5 4 
1 3 4 2 5
1 3 4 5 2
1 3 5 2 4
1 3 5 4 2
1 4 2 3 5
1 4 2 5 3
1 4 3 2 5
1 4 3 5 2
1 4 5 2 3
1 4 5 3 2
1 5 2 3 4
1 5 2 4 3
1 5 3 2 4
1 5 3 4 2
1 5 4 2 3
1 5 4 3 2
2 1 3 4 5
2 1 3 5 4 
2 1 4 3 5
2 1 4 5 3
2 1 5 3 4
2 1 5 4 3
2 3 1 4 5
2 3 1 5 4
2 3 4 1 5
2 3 4 5 1
2 3 5 1 4
2 3 5 4 1
2 4 1 3 5
2 4 1 5 3
2 4 3 1 5
2 4 3 5 1
2 4 5 1 3
2 4 5 3 1
2 5 1 3 4
2 5 1 4 3
2 5 3 1 4
2 5 3 4 1
2 5 4 1 3
2 5 4 3 1
3 1 2 4 5
3 1 2 5 4
3 1 4 2 5
3 1 4 5 2
3 1 5 2 4
3 1 5 4 2
3 2 1 4 5
3 2 1 5 4
3 2 4 1 5
3 2 4 5 1
3 2 5 1 4
3 2 5 4 1
3 4 1 2 5 
3 4 1 5 2
3 4 2 1 5
3 4 2 5 1
3 4 5 1 2
3 4 5 2 1
3 5 1 2 4
3 5 1 4 2
3 5 2 1 4
3 5 2 4 1
3 5 4 1 2
3 5 4 2 1
4 1 2 3 5
4 1 2 5 3
4 1 3 2 5
4 1 3 5 2
4 1 5 2 3
4 1 5 3 2
4 2 1 3 5
4 2 1 5 3
4 2 3 1 5
4 2 3 5 1
4 2 5 1 3
4 2 5 3 1
4 3 1 2 5
4 3 1 5 2
4 3 2 1 5
4 3 2 5 1
4 3 5 1 2
4 3 5 2 1
4 5 1 2 3
4 5 1 3 2
4 5 2 1 3
4 5 2 3 1
4 5 3 1 2
4 5 3 2 1
5 1 2 3 4
5 1 2 4 3
5 1 3 2 4
5 1 3 4 2
5 1 4 2 3
5 1 4 3 2
5 2 1 3 4
5 2 1 4 3
5 2 3 1 4
5 2 3 4 1
5 2 4 1 3
5 2 4 3 1
5 3 1 2 4
5 3 1 4 2
5 3 2 1 4
5 3 2 4 1
5 3 4 1 2
5 3 4 2 1
5 4 1 2 3
5 4 1 3 2
5 4 2 1 3
5 4 2 3 1
5 4 3 1 2
5 4 3 2 1
*/


#if 0 // Tu code
int n, a[100], ok, cnt = 1;
void ktao()
{
    for(int i = 1; i <= n; i++)
        a[i] = i;
}

void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        i--;
    if(i == 0)
        ok = 0;
    else
    {
        // Tim thang > a[i] trong doan [i + 1, n]
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i],a[j]);
        // Lat nguoc bang 2 con tro
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++, r--;
        }
        //  Lat nguoc bang ham co san
        // reverse(a + i + 1, a + n + 1);
        cnt++;
    }
}

int main()
{
    cin >> n;
    ok = 1;
    ktao();
    while (ok)  
    {
        for(int i = 1; i <= n; i++)
            cout << a[i] << ' ';
        cout << endl;
        sinh();
    }
    cout << cnt;
    return 0;
}
#endif

#if 1 // Ham co san _permutation(a, a + n) ap dung cho mang vecto or string
// next_permutation ap dung cho 1 2 3 4 5
// prev_permutation ap dung cho 5 4 3 2 1
int main()
{
    int n; cin >> n;
    int a[n];
    int cnt = 0;
    #if 0 // next_permutation
    for(int i = 0; i < n; i++)
        a[i] = i + 1;
    do
    {
        cnt++;
        for(int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << endl;
    } while (next_permutation(a, a + n));
    cout << cnt;
    #endif

    #if 0 // prev_permutation
    for(int i = 0; i < n; i++)
        a[i] = n - i;
    
    do
    {
        cnt++;
        for(int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << endl;
    } while (prev_permutation(a, a + n));
    cout << cnt;
    #endif
    return 0;
}
#endif