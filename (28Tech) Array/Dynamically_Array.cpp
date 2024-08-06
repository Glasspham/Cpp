#include <iostream>
#include <iomanip>
#include <typeinfo> 
#include <cstdlib>
#include <ctime>
#include <random>
#include <array>
#include <algorithm>

using namespace std;

#if 0 // Khai báo 1 mảng động bình thường
int main() {
    cout << "Chieu dai mang: ";
    int length;cin >> length;

    int *array = new int[length];
    array[0] = 4;
    array[1] = 52;

    delete[] array;
}
#endif

#if 0 // Thay đổi độ dài phần tử mảng động
int main(){
    int size = 3; // Độ dài mảng ban đầu
    int *array = new int[size] {4, 7, 2};

    int newsize = 6; // Độ dài mới của mảng
    int *resize = new int[newsize];

    // Sao chép lại toàn bộ dữ liệu từ mảng cũ sang mảng mới
    for(int i = 0; i < 3; i++)
        resize[i] = array[i];

    /* 
        Xóa dữ liệu mảng cũ để truyền dữ liệu mới cho cùng 1 
        mảng tên là array để đỡ gọi thêm mảng.
    */ 
    delete[] array;
    array = resize;
    size = newsize;

    // Chỗ này dùng mảng để thực hiện công việc...

    // Xóa dữ liệu khi kết thúc chương trình cho đỡ hao tốn dung lượng của hệ điều hành
    delete[] array;
    delete[] resize;
    return 0;
}
#endif