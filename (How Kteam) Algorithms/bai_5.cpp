// Đếm số các chữ số nguyên dương
#include <iostream>
using namespace std;

// Dùng vòng lặp
int DemsochusoLoop(int nInput) 
{
    int count(0);
    while (nInput != 0)
    {
        nInput /= 10;
        count ++;
    }
    return count;
}

// Đệ quỵ
int DemsochusoDQ(int nInput)
{
    if(nInput < 10)
        return 1;
    return 1 + DemsochusoDQ(nInput / 10);
}

int main()
{
    int nInput;
    cout << "Enter n(integer): ";
    cin >> nInput;

    cout << "So " << nInput << " co tat ca (Loop) la: " << DemsochusoLoop(nInput) << " so" << '\n';
    
    cout << "So " << nInput << " 1co tat ca (Dequy) la: " << DemsochusoDQ(nInput) << " so" << '\n';
    
    
    return 0;
}
