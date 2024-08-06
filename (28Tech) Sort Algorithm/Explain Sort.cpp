#include<bits/stdc++.h>
using namespace std;

/*
Hướng dẫn và giải thích bới 28Tech 
Trong phần "ngôn ngữ lập trình C++" video #19.1 -> #19.5
#19.1 "https://youtu.be/FllEXZV1Z58?si=cfFpdvojXT3_i0ON"
#19.2 "https://youtu.be/hTHO1Mprj8g?si=NkH1JEb4svosstnC"
#19.3 "https://youtu.be/XFI96Z7i3LE?si=HT0DJgnFCG8eQ-Ql"
#19.4 "https://youtu.be/eT9Epyf0XLM?si=W3wGv7oYDr_ERoHp"
#19.5 "https://youtu.be/v7KL3b2-Zlo?si=sLJBZfPBZlvx1Nf5"
*/

/*
Ở mỗi bước của thuật toán luôn đưa phần tử nhỏ nhất(lớn nhất) đưa về đầu dãy.
Để sắp xếp dãy có n phần tử cần thực hiện n - 1 bước.
*/
void SelectionSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int index = i;
        for(int j = i + 1; j < n; j++)
            if(a[j] < a[index]) // Nếu < thì tăng dần, > thì giảm dần
                index = j;
        swap(a[index],a[i]);
    }
}

// So sánh 2 phần tử liền kề và đưa phần tử lớn nhất(nhỏ nhất) về cuối dãy
void BubbleSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++) // Không xét các giá trị đã sắp xếp và đưa về cuối rồi 
            while (a[j] > a[j + 1]) // Nếu > thì tăng dần, < thì giảm dần
                swap(a[j], a[j + 1]);
    }
}

/*
Ở mỗi bước của thuật toán sẽ cố gắng đưa phần tử ở vị trí hiện tại về
đúng vị trí bằng cách chèn nó vào dãy các phần tử đứng trước nó sao cho đúng thứ
tự.
*/
void InsertionSort(int a[], int n)
{
    for(int i = 1; i < n - 1; i++)
    {
        int value = a[i], index = i - 1;
        while (index >= 0 && a[index] > value) // Kiểm tra a[index] là vị trí phía trước coi có lớn hơn giá trị value không thì đưa a[index] ra sau 
        {
            a[index + 1] = a[index];
            --index;
        }
        a[index + 1] = value; // index lúc này ở vị trí có giá trị <= value
    }
}

int cnt[10000000];
// Đếm số lượng phần tử và tìm gía trị lớn nhất trong mảng để in ra
void CountingSort(int a[], int n)
{
    #if 1 // No using map
    int m = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        cnt[a[i]]++; // Đếm số lần xuất hiện của mỗi giá trị
        m = max(m,a[i]); // Tìm cái giá trị lớn nhất có trong mảng
    }
    for(int i = 0; i <= m; i++) // Chạy vòng lặp đến m giá trị
        if(cnt[i] != 0) // Kiểm tra coi giá trị m này có tăng lên hay không là biết được có tồn tại hay không
            for(int j = 0; j < cnt[i]; j++) // Số lần xuất hiện của giá trị đó
                cout << i << ' ';
    #endif

    #if 0 // Using map
    map<int,int> list;
    for(int i = 0; i < n; i++)
        list[a[i]]++;
    for(auto it : list)
        if(it.second != 0)
            for(int j = 0; j < it.second; j++)
                cout << it.first << ' ';
    #endif
}       


/*
Thuật toán sắp xếp trộn sử dụng phương pháp chia và trị, chia dãy ban
đầu thành các dãy con cho tới khi dãy chỉ còn 1 phần tử, sau đó thực hiện trộn 2
dãy con tăng dần(giảm dần) thành 1 dãy tăng dần(giảm dần).
*/
void Merge(int a[], int l, int m, int r)
{
    vector<int> x(a + l, a + m + 1); // Tạo mảng x từ (đầu) mảng a -> (vị trí ở giữa) mảng a
    vector<int> y(a + m + 1, a + r + 1); // Tạo mảng y từ (vị trí ở giữa + 1) mảng a -> (cuối) mảng a
    int i = 0, j = 0;
    while (i < x.size() && j < y.size()) // So sánh từng phần tử trong x&y xem thg nào nhỏ hơn(lớn hơn) rồi điền vào trong a lại
    {
        if(x[i] <= y[j]) // Nếu <= thì tăng dần, >= thì giảm dần
        {
            a[l] = x[i];
            l++;
            i++;
        }
        else
        {
            a[l] = y[j];
            l++;
            j++;
        }
    }
    while (i < x.size()) // Kiểm tra các phần còn lại của mảng x chưa thêm vào mảng a
    {
        a[l] = x[i];
        l++;
        i++;
    }
    while (j < y.size()) // Kiểm tra các phần còn lại của mảng y chưa thêm vào mảng a
    {
        a[l] = y[j];
        l++;
        j++;
    }
}

void MergeSort(int a[], int l, int r)
{
    if(l < r) 
    {
        int m = (l + r) / 2;
        
        /*
        Chia thành 2 mảng con
        Sắp xếp mảng con bằng các chia ra thành những mảng con nhỏ hơn bên trong
        */
        MergeSort(a,l,m); 
        MergeSort(a,m + 1,r);
        Merge(a,l,m,r);
    }
}


/*
Sắp xếp vun đống hoạt động bằng cách hình dung các phần tử của mảng như
một loại cây nhị phân hoàn chỉnh đặc biệt được gọi là heap. Và bắt đầu sắp
xếp phần tử lớn nhất(nhỏ nhất) vào vị trí cuối cùng trước rồi tiếp phần 
tử lớn thứ 2(nhỏ thứ 2)
*/
void Heapify(int a[], int n, int i)
{
    int l = 2 * i + 1; // Con bên phải
    int r = 2 * i + 2; // Con bên trái
    int largest = i; // Coi giá trị lớn nhất là ngay tại vị trí i
    if(l < n && a[l] > a[largest]) // Kiểm tra vị trí con vẫn nằm trong mảng và a[l] > a[largest] thì đổi largest
        largest = l;
    if(r < n && a[r] > a[largest]) // Kiểm tra vị trí con vẫn nằm trong mảng và a[l] > a[largest] thì đổi largest
        largest = r;
    if(largest != i) // Xét 2 TH trên thấy nốt gốc chưa là lớn nhất
    {
        swap(a[i],a[largest]);
        Heapify(a,n,largest);
    }
}

void HeapSort(int a[], int n)
{
    // Xay dung maxheap (nghĩa là nốt gốc phái có giá trị lớn hơn các nốt con)
    for(int i = n / 2 - 1; i >= 0; i--)
        Heapify(a,n,i);
    // Nốt gốc là giá trị lớn nhất trong mảng lúc đó thì swap với giá trị bắt đầu từ cuối đi lên dần đã sắp xếp mảng tăng dần
    for(int i = n - 1; i >= 0; i--)
        {
            swap(a[i],a[0]);
            Heapify(a,i,0); // Lúc nay sẽ cặp nhật lại và tiếp tục vòng lặp xếp các phần tử kế tiếp, thì i là sẽ không sắp xếp phần tử đã sắp xếp ở trên
        }
}


/*
Chia: Phân vùng (sắp xếp lại) mảng A[p...r] thành hai mảng con (có thể trống) A[p...q - 1] và A[q + 1...r] 
sao cho mỗi phần tử của A[p...q - 1] nhỏ hơn hoặc bằng A[q], tức là nhỏ hơn hoặc bằng từng phần tử của A[q + 1...r]. 
Tính chỉ số q như một phần của thủ tục phân vùng này.
Chinh phục: Sắp xếp hai mảng con A[p...q - 1] và A[q + 1...r] bằng cách gọi đệ quy tới quicksort.
Kết hợp: Vì các mảng con đã được sắp xếp nên không cần thực hiện thao tác nào để kết hợp chúng: toàn bộ mảng A[p...r] 
hiện đã được sắp xếp.
*/

// Nhược điểm của Lomuto là khi mảng có 1 số phần tử đâ được sắp xếp tăng dần sẵn rồi thì thuật toán giải khác lâu
int PartitionLomuto(int a[], int l, int r)
{
    int pivot = a[r]; // Lấy giá trị tần cùng bên phải để so sánh
    int i = l - 1;
    for(int j = l; j < r; j++)
    {
        if(a[j] <= pivot) // Tại vị trí đó mà có giá trị nhỏ hơn pivot 
        {
            i++; // Thì tăng giá trị i lên chỗ kế tiếp là cái chỗ thuộc vùng số lớn hơn pivot
            swap(a[i],a[j]); // Rồi đẩy giá trị < pivot lên vào vị trí đó
        }
    }
    i++; // Tăng biến i lên một đơn vị là vị trí đầu tiên của phần tử lớn hơn pivot
    swap(a[i], a[r]); // Đưa chốt ra giữa để phân tách 2 mảng (lớn hơn pivot và nhỏ hơn pivot)
    return i;
}

void QuickSortLomuto(int a[], int l, int r)
{
    if(l < r)
    {
        int q = PartitionLomuto(a,l,r);
        // Tiếp tục xét 2 mảng 2 bên pivot và chia nhỏ 2 mảng đó đến khi còn 1 phần tử
        QuickSortLomuto(a, l, q - 1); // Mảng nhỏ hơn pivot
        QuickSortLomuto(a, q + 1, r); // Mảng lớn hơn pivot
    }
}

int PartitionHore(int a[], int l, int r)
{
    int pivot = a[l]; 
    int i = l - 1, j = r + 1; // i xuất phát từ đầu mảng, j xuất phát từ cuối mảng
    while (1)
    {
        do { // Vì i đang nằm ngoài mảng nên ta tăng lên trước để vào  trong mảng rồi bắt đầu so sánh
            i++;
        } while (a[i] < pivot); // Nếu giá trị a[i] < pivot thì tiếp tục còn không thì dùng lại để swap
        do {  // Vì j đang nằm ngoài mảng nên ta giảm xuống trước để vào  trong mảng rồi bắt đầu so sánh
            j--;
        } while (a[j] > pivot); // Nếu giá trị a[j] > pivot thì tiếp tục còn không thì dùng lại để swap
        if (i < j) // Giúp swap khi 2 TH hợp trên đã dừng lại khi khác điều kiện
            swap(a[i],a[j]);
        else return j; // vị trí phân hoạch chia thành 2 mảng
    }
}

void QuickSortHoare(int a[], int l, int r)
{
    if (l < r)
    {
        int q = PartitionHore(a,l,r);
        QuickSortHoare(a, l, q); // Này là xét luôn pivot ở phía hàm PartitionHore vừa dùng
        QuickSortHoare(a,q + 1, r); 
    }
}   

int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a)
        x = rand() % 100;
    for(int i : a)
        cout << i << ' ';
    cout << endl;
    QuickSortHoare(a, 0, n - 1);
    for(int i : a)
        cout << i << ' ';
    return 0;  
}
