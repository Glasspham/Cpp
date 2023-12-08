// Viết hàm tìm vị trí của phần tử lớn nhất trong mảng các số nguyên
#include<iostream>
#include<time.h>
using namespace std;

int main()
{  
    int nSize;
    cout << "Nhap chieu dai mang: ";
    cin >> nSize;

    int arr[nSize];
    srand((unsigned)time(NULL));
    for(int i = 0; i < nSize; i++)
        arr[i] = rand() % 100 - rand() % 100;
    
    cout << "In ra mang ban dau: " << endl;
    for(int i = 0; i < nSize; i++)
        cout << arr[i] << ' ';
    cout << endl;

    // Tìm giá trị min trong mảng
    int value_min = arr[0];
    for(int i = 0; i < nSize; i++)
    {
        if(arr[i] < value_min)
        {
            value_min = arr[i];
        }
    }

    // Xét xem giá trị nào lớn hơn min
    int index_max = -1; // Khởi tạo index_max bằng -1
    int value_max = -101; // Khởi tạo value_max bằng một giá trị thấp hơn giá trị âm nhỏ nhất có thể có
    for(int i = 0; i < nSize; i++)
    {
        if(arr[i] < 0 && arr[i] > value_max)
        {
            value_max = arr[i];
            index_max = i;
        }
    }
  
    if(index_max == -1) 
    {
        cout << "Khong co so am trong mang." << endl;
    } 
    else
    {
        cout << "Vi tri phan tu am lon nhat trong mang: " << index_max << '\n';
    }
  
    system("pause");
    return 0;
}
/*
Lưu ý đoạn code này không hoàn toàn hoàn hảo vì thực tế không cần lệnh ở "Tìm giá trị min trong mảng".
Mà sẽ xét giá trị index_max = -1 và value_max = -101, thì cái -101 là số lớn hơn giá trị mà random ra được
do cái dòng rand() % 100 là random số trong khoảng 100. Nếu giới hạn cao hơn thì + 1 đơn vị.
Còn không thì dùng "Tìm giá trị min trong mảng" thì khai báo lại như sau:
int index_max = -1;
int value_max = value_min;
Nhưng nó sẽ bị lỗi khi gặp trường hợp 1 âm còn lại dương:
vd arr = {1,2,3,-4,5}
Nên mới có cách trên lấy hẳn 1 con nhỏ nhất.
Nên lời khuyên tốt nhất hãy tự viết 1 bài khác hoặc thêm khảo trên How Kteam ở những bài tập cơ bản C++
https://howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/viet-ham-tim-vi-tri-cua-phan-tu-lon-nhat-trong-mang-cac-so-nguyen-1473
*/
