// Giai thừa
#include <iostream>
using namespace std;

// Dùng vòng lặp
int GiaithuaLoop(int &nInput)
{
    int result(1);
    for(int i = nInput; i > 0; i--) // Cách viết khác for(int i = 1; i <= nInput; i++) int i = nInput; i > 0; i--
    {
        result = result * i;
    }
    return result;
}

// Đệ quỵ
int GiaithuaDQ(int nInput)
{
    if(nInput == 0)
        return 1;
    return nInput * GiaithuaDQ(nInput - 1);
}

int main()
{
    int nInput;
    cout << "Enter n(integer): ";
    cin >> nInput;

    cout << "(Loop): " << nInput << "! = " << GiaithuaLoop(nInput) << '\n';

    cout << "(Dequy): " << nInput << "! = " << GiaithuaDQ(nInput) << '\n';
    
    
    return 0;
}
