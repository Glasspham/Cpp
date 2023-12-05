// Kiểm tra đối xứng
#include <iostream>
using namespace std;

int timsodao(int &nInput)
{
    int nSodao(0),nRem;
    while(nInput != 0)
    {
        //Lấy số cuối cùng 
        nRem = nInput % 10;

        //Nhân kết quả với 10, cộng với số cuối cùng vừa tách
        nSodao = (nSodao * 10) + nRem;

        //Xóa số cuối
        nInput /= 10;
    }
    return nSodao;
}

bool lasodoixung(int &nInput)
{
    #if 0 // Cách 1 
    if(nInput == timsodao(nInput))
        return true;
    else
        return false;
    #endif

    #if 1 // Cách 2 vì đang trong kiểu boolean nên chỉ có 2 giá trị True or False thì ta có thể ghi ngắn gọn
    return (nInput == timsodao(nInput));
    #endif
}

int main()
{
    int nInput;
    cout << "Enter n(integer): ";
    cin >> nInput;

    if(lasodoixung(nInput) == true) //Có thể ghi if(lasodoixung(nInput)) nó sẽ tự hiểu lấy true trước lấy false sau
    {
        cout << "Yes \n";
    }
    else
    {
        cout << "No \n";
    }

    
    return 0;
}
