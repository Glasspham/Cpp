#include <iostream>
#include <iomanip>
#include <typeinfo> 
#include <cstdlib>
#include <ctime>
#include <random>
#include <array>
#include <algorithm>

using namespace std;

#if 1 // Mảng 1 chiều cùng những ứng dụng của nó

    #define Max 1000
    void nhapmang(int arr[], int &n);
    void xuatmang(int arr[], int n);
    void saochepmangmotchieu(int arrDest[], int arrSoure[], int n);
    int timkiemphantu(int arr[], int n, int x);
    void hoanvi(int &a, int &b);
    void sapxeptangdan(int arr[], int n);
    void them1phantuvaomang(int a[], int &n, int idx, int x);
    void xoa1phantutrongmang(int a[], int &n, int idx);

    int main()
    {
        #if 1 //Nhập và xuất mảng
            int myarray[Max];
            int nsize;
            nhapmang(myarray, nsize);
            xuatmang(myarray, nsize);
        #endif

        #if 1 //Sao chép phần tử từ mảng này sang mảng khác
            int array2[Max];
            
            cout << "Sau khi sao chep sang mang thu 2" << "\n";
            
            saochepmangmotchieu(array2, myarray, nsize);
            xuatmang(array2, nsize);
        #endif

        #if 0 //Tìm kiếm 1 phần tử bên trong mảng
            int x;
            int idx;

            cout << "Gia tri can tim trong mang:";
            cin >> x;
            
            idx = timkiemphantu(myarray, nsize, x);
            if(idx == -1)
            {
                cout << "Khong tim thay gia tri!" << "\n";
            }
            else
            {
                cout << "Gia tri " << x << " nam thu " << idx << " trong mang" << "\n";
            }
        #endif

        #if 0 //Sắp xếp các phần tử lại từ nhỏ đến lớn
            cout << "Sau khi sap xep tang dan" << "\n";

            sapxeptangdan(myarray, nsize);
            xuatmang(myarray, nsize);
        #endif

        #if 0 //Thêm 1 phần tử cho mảng
            int z;
            int idx;

            cout << "Gia tri muon them vao trong mang: ";
            cin >> z;
            cout << "Vi tri muon thay doi: ";
            cin >> idx;

            them1phantuvaomang(myarray, nsize, idx, z);
            xuatmang(myarray, nsize);
        #endif

        #if 0 //Xóa 1 phẩn tử của mảng
            int idx;
            
            cout << "Vi tri so can xoa: ";
            cin >> idx;

            xoa1phantutrongmang(myarray, nsize, idx);
            xuatmang(myarray, nsize);
        #endif

        return 0;
    }

    void nhapmang(int arr[], int &n)
    {
        srand(time(0));
        
        cout << "Nhap so phan tu:";
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            arr[i] = rand();
        }
    }

    void xuatmang(int arr[], int n)
    {
        for( int i = 0; i < n; i++)
        {
            cout << "Array [" << i << "] =" << arr[i] << "\n";
        }
    }

    void saochepmangmotchieu(int arrDest[], int arrSoure[], int n)
    {
        for( int i = 0; i < n; i++)
        {
            arrDest[i] = arrSoure[i];
        }
    }

    int timkiemphantu(int arr[], int n, int x)
    {
        for( int i = 0; i < n; i++)
        {
            if(arr[i] == x)
                return i;
        }

        return -1;
    }

    void hoanvi(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    void sapxeptangdan(int arr[], int n)
    {
        for( int i = 0; i < n - 1; i++)
        {
            for( int j = i + 1; j < n; j++)
            {
                if(arr[i] > arr[j])
                    hoanvi(arr[i], arr[j]);
            }
        }
    }

    void them1phantuvaomang(int a[], int &n, int idx, int x)
    {
        if(idx >= 0 && idx <= n)
        {
            for( int i = n; i > idx; i--)
                a[i] = a[i - 1];
            a[idx] = x;
            n++;
        }
    }

    void xoa1phantutrongmang(int a[], int &n, int idx)
{
    if(idx >= 0 && idx < n)
    {
        for(int i = idx; i < n; i++)
            a[i] = a[i + 1];
        n--;
    }
}

#endif

#if 0 // Mảng 2 chiều

    #if 0 //Phần main tạo số cột số dòng với những số ngẫu nhiên
    int main()
    {
        int row,col;
        srand(time(0));
        
        cout << "So dong: ";
        cin >> row;
        cout << "So cot: ";
        cin >> col;

        int array[row][col];

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                array[i][j] = rand();
            }
        }

         for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                cout << array[i][j] << "\t";
            }
            cout << "\n";
        }   
        return 0;
    }
    #endif

    #if 0 //Mảng trong hàm
            #define ROW 100
            #define COL 100
            void nhapmang(int mt[ROW][COL], int &a, int &b);
            void xuatmang(int mt[ROW][COL], int a, int b);
            int tongdong(int mt[ROW][COL], int n, int d);
            int tongcot(int mt[ROW][COL], int m, int c);
        
            int main()
            {

                int m[ROW][COL];
                int row,col;

                nhapmang(m, row, col);
                xuatmang(m, row, col);
                { // Tổng của 1 dòng bất kì
                int iRow;
                cout << "Dong can tinh tong: ";
                cin >> iRow;

                int sumrow = tongdong(m, col, iRow);
                cout << "Tong cua dong " << iRow <<" la " << sumrow << "\n";
                }

                { //Tổng của 1 cột bất kì
                int iCol;
                cout << "Cot can tinh tong: ";
                cin >> iCol;

                int sumcol = tongcot(m, row, iCol);
                cout << "Tong cua cot " << iCol <<" la " << sumcol << "\n";
                }

                return 0;
            }

            void nhapmang(int mt[ROW][COL], int &a, int &b)
            {
                srand(time(NULL));

                cout << "So dong: ";
                cin >> a;
                cout << "So cot: ";
                cin >> b;

               
                for(int i = 0; i < a; i++)
                {
                    for(int j = 0; j < b; j++)
                    {
                        mt[i][j] = rand() % 100 ;
                    }
                }
            }

            void xuatmang(int mt[ROW][COL], int a, int b)
            {
                for(int i = 0; i < a; i++)
                {
                    for(int j = 0; j < b; j++)
                    {
                        cout << mt[i][j] << "\t";
                    }
                    cout << "\n";
                }
                
            }

            int tongdong(int mt[ROW][COL], int n, int d)
            {
                int sum(0);
                for(int j = 0; j < n; j++)
                {  
                    sum += mt[d][j]; 
                }
                
                return sum;
            }

            int tongcot(int mt[ROW][COL], int m, int c)
            {
                int sum(0);
                for(int j = 0; j < m; j++)
                {
                    sum += mt[c][j];
                }
                cout << sum ;
            }
    #endif

#endif

#if 0 // Cách khác khai báo mảng bằng thư viện array
    #define max 5

    void printArray(const array<int, max> &arr)
    {
        cout << "So phan tu trong mang: " << arr.size() <<"\n";
        for(const auto &item : arr)
        {
            cout << item << "\n";
        }
        cout << "\n";
    }

    int main()
    {
        srand(time(0));
        array<int, max> arr; 
        for(int i = 0; i < max; i++)
        {
            arr[i] = rand() % 100 + 1;
        }
        printArray(arr);
    }
    
#endif

#if 0 // Sắp xếp tăng giảm giá trị bằng thư viện array
    #define max 5

    void printArray(const array<int, max> &arr)
    {
        for(const auto &item : arr)
        {
            cout << item << "\n";
        }
        cout << "\n";
    } 

    int main()
    {
        
        srand(time(0));
        array<int, max> arr; 
        for(int i = 0; i < max; i++)
        {
            arr[i] = rand() % 100 + 1;
        }

        cout << "Sap xep tang dan" << "\n";
        sort(arr.begin(), arr.end());
        printArray(arr);
       
        cout << "Sap xep giam dan" << "\n";
        sort(arr.rbegin(), arr.rend());
        printArray(arr);
    }
#endif

#if 0 // Mảng động
    #if 0 // Khai báo 1 mảng động bình thường
        int main() 
        {
        cout << "Chieu dai mang: ";
        int length;
        cin >> length;

        int *array = new int[length];
        array[0] = 4;
        array[1] = 52;

        delete[] array;
        }
    #endif

    #if 0 // Thay đổi độ dài phần tử mảng động

        int main()
        {
            int size = 3;
            // Độ dài mảng ban đầu
            int *array = new int[size] {4, 7, 2};

            int newsize = 6;
            // Độ dài mới của mảng
            int *resize = new int[newsize];

            // Sao chép lại toàn bộ dữ liệu từ mảng cũ sang mảng mới
            for(int i = 0; i < 3; i++)
            {
                resize[i] = array[i];
            }

            delete[] array;
            // Xóa dữ liệu cũ trong mảng để truyền dữ liệu mới cho cùng 1 mảng tên là array để đỡ gọi thêm mảng
            array = resize;
            size = newsize;

            // Chỗ này dùng mảng để thực hiện công việc

            delete[] array;
            delete[] resize;
            // Xóa dữ liệu khi kết thúc chương trình cho đỡ hao tốn dung lượng của hệ điều hành
            return 0;
        }

    #endif

#endif

#if 0 // Con trỏ void (hỗ trợ giúp ít function)
    enum Type
    {
        INT,
        DOUBLE
    };

    void printValueOfPointer(void *ptr, Type type)
    {
        switch (type)
        {
        case INT:
            cout << *(static_cast<int*>(ptr)) << '\n'; // ép con trỏ void thành con trỏ int
            break;
        case DOUBLE:
            cout << *(static_cast<double*>(ptr)) << '\n'; // ép con trỏ void thành con trỏ double
            break;
        }
    }

    int main()
    {
        int nValue = 10;
        double dValue = 6.9;

        printValueOfPointer(&nValue, INT);
        printValueOfPointer(&dValue, DOUBLE);

        
        return 0;
    }
#endif

#if 0 // Sắp xếp tăng giảm dùng con trỏ

    #if 0 // Cách gọi 2 hàm
        // hoán đổi giá trị hai số
        void swapNumber(int &a, int &b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        // hàm sắp xếp tăng sử dụng thuật toán selection sort
        void selectionSortAsc(int *arr, int n)
        {
            // One by one move boundary of unsorted subarray  
            for (int i = 0; i < n - 1; i++)
            {
                // Find the minimum element in unsorted array  
                int min_idx = i;
                for (int j = i + 1; j < n; j++)
                {
                    if (arr[min_idx] > arr[j])
                    {
                        min_idx = j;
                    }
                }
                // Swap the found minimum element with the first element  
                swapNumber(arr[min_idx], arr[i]);
            }
        }

        // hàm sắp xếp giảm sử dụng thuật toán selection sort
        void selectionSortDesc(int *arr, int n)
        {
            // One by one move boundary of unsorted subarray  
            for (int i = 0; i < n - 1; i++)
            {
                // Find the maximum element in unsorted array  
                int max_idx = i;
                for (int j = i + 1; j < n; j++)
                {
                    if (arr[max_idx] < arr[j])
                    {
                        max_idx = j;
                    }
                }

                // Swap the found maximum element with the first element  
                swapNumber(arr[max_idx], arr[i]);
            }
        }

        /* Function to print an array */
        void printArray(int arr[], int size)
        {
            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
        }

        int main()
        {
            int arr[] = { 64, 25, 12, 22, 11 };
            int n = sizeof(arr) / sizeof(int);

            // Sắp xếp tăng
            selectionSortAsc(arr, n);

            cout << "Asc array: \n";
            printArray(arr, n);

            // Sắp xếp giảm
            selectionSortDesc(arr, n);

            cout << "Desc array: \n";
            printArray(arr, n);

            return 0;
        }
    #endif

    #if 0 // Chồng chất 2 hàm tăng giảm vào 1
        void swapNumber(int &a, int &b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        bool asc(int a, int b)
        {
            return a > b;
        }

        bool desc(int a, int b)
        {
            return a < b;
        }

        void selectionSort(int *arr, int n, bool(*comparisonFcn)(int, int))
        {
            int i, j, find_idx;

            // One by one move boundary of unsorted subarray  
            for (i = 0; i < n - 1; i++)
            {
                // Find the minimum element in unsorted array  
                find_idx = i;
                for (j = i + 1; j < n; j++)
                {
                    if (comparisonFcn(arr[find_idx], arr[j]))
                    {
                        find_idx = j;
                    }
                }

                // Swap the found minimum element with the first element  
                swapNumber(arr[find_idx], arr[i]);
            }
        }

        /* Function to print an array */
        void printArray(int arr[], int size)
        {
            int i;
            for (i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
        }

        int main()
        {
            int arr[] = { 64, 25, 12, 22, 11 };
            int n = sizeof(arr) / sizeof(int);

            // Sắp xếp tăng
            selectionSort(arr, n, asc);

            cout << "Asc array: \n";
            printArray(arr, n);

            // Sắp xếp giảm
            selectionSort(arr, n, desc);

            cout << "Desc array: \n";
            printArray(arr, n);

            
            return 0;
        }
    #endif

#endif
