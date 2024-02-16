#include<bits/stdc++.h>
using namespace std;

/*
Nội dung từ 28Tech trong phần "ngôn ngữ lập trình C++" video #18
Link video bài giảng: https://youtu.be/dB2DWSKGLj8?si=kBFlEqvd8Mfd-ywt
*/

#if 0 // Search Binary: là mảng đã được sắp xếp tăng or giảm dần
bool Binary_search(int a[], int n, int x)
{
    sort(a, a + n);
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (r + l) / 2;
        if(a[mid] == x)
            return true;
        else if(a[mid] < x)
            l = mid + 1;
        else 
            r = mid - 1;
    }
    return false;
}

bool Binary_search(int a[], int l, int r, int x)
{
    sort(a, a + r + 1);
    if(l > r)
        return false;
    int mid = (l + r) / 2;
    if(a[mid] == x)
        return true;
    else if(a[mid] < x)
        return Binary_search(a, mid + 1, r, x);
    else
        return Binary_search(a, l, mid - 1, x);
}

int main()
{
    int n = 10;
    int a[n] = {1,2,3,4,5,6,7,8,9,10};
    int x = 10;
    
    #if 0 // No using function
    sort(a, a + n);
    int l = 0, r = 9;
    bool f = true;
    while (l <= r)
    {   
        int mid = (l + r) / 2;
        if(a[mid] == x)
        {
            cout << "Found \n";
            f = false;
            break;
        }
        else if(a[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    if(f)
        cout << "Not found \n";
    #endif

    #if 0 // Using function normal
    if(Binary_search(a,n,x))
        cout << "Found \n";
    else
        cout << "Not found \n";
    #endif

    #if 0 // Using function rerecursion
    if(Binary_search(a, 0, n - 1, x))
        cout << "Found \n";
    else
        cout << "Not found \n";
    #endif 

    #if 0 // Using function available
    if(binary_search(a, a + n, x))
        cout << "Found \n";
    else
        cout << "Not found \n";
    #endif
}
#endif

#if 0 // Tìm vị trí đầu tiên và cuối cùng của 1 phần tử x trong 1 mảng đã được sắp xếp
int first_pos(int a[], int n, int x)
{
    int l = 0, r = n - 1, res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x)
        {
            res = mid;
            r = mid - 1;
        }
        else if(a[mid] <  x)
            l = mid + 1;
        else r = mid - 1;
    }    
    return res;
}

int last_pos(int a[], int n, int x)
{
    int l = 0, r = n - 1, res = -1;
    while (l <= r)
    {
        int mid = (r + l) / 2;
        if(a[mid] == x)
        {
            res = mid;
            l = mid + 1;
        }
        else if(a[mid] < x)
            l = mid + 1;
        else r = mid - 1;
    }
    return res;
}

int main()
{
    int n = 10, x = 4;
    int a[n] = {1,2,2,3,3,3,4,4,5,5};
    cout << first_pos(a,n,x) << last_pos(a,n,x) << endl;
    // Tìm số phần tử x được sắp xếp trong mảng
    int l = first_pos(a,n,x);
    int r = last_pos(a,n,x);
    if(l != - 1)
        cout << "So phan tu x co trong mang da duo sort " << r - l + 1 << endl;
    else cout << "So phan tu x co trong mang da duo sort 0 \n";
    
}
#endif
