#include<iostream>
using namespace std;

// Hàm tìm kiếm nhị phân bằng pp đệ quy
int tksb(int a[], int left, int right, int x)
{
    if(right >= left)
    {
        int mid = left + (right - left) / 2;

        // Nếu phần tử giữa là x, trả về vị trí của
        if(a[mid] == x)
            return mid;

        // Nếu phần tử giữa lớn hơn x, tiếp tục tìm kiếm trong đoạn [left, mid -1]
        if(a[mid] > x)
            return tksb(a, left, mid -1, x);

        // Nếu phần tử giữa nhỏ hơn x, tiếp tục tìm kiếm trong đoạn [mid + 1, right] 
        return tksb(a, mid + 1, right, x);
    } 

    // Nếu không tìm thấy x, trả về -1
    return -1;
}

int main()
{
    int a[] = {2, 3, 4, 10, 40};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 10;

    // Gọi hàm Tìm Kiếm nhị phân bằng pp đệ quy
    int result = tksb(a, 0, n - 1, x);
    if(result != -1)
        cout << "Da tim thay x tai vi tri " << result << endl;
    else
        cout << "Khong tim thay x!" << endl;

    return 0;
}
