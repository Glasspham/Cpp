// Tính tiền đi Taxi
#include "constants.h"
using namespace constants;

int main()
{
    double skm;
    double tongsotien;
    cout << "So km ma ban da di taxi: ";
    cin >> skm;

    if(skm < nguong_1)
    {
        tongsotien = skm * 15000;
    }
    else 
    {
        if(skm <= nguong_2)
        {
            tongsotien = nguong_1 * gia_1 + (skm - nguong_1) * gia_2;
        }
        else
        {
            tongsotien = nguong_1 * gia_1 + (nguong_2 - nguong_1) * gia_2 + (skm - nguong_2) * gia_3;
            if(skm > nguong_3)
            {
                tongsotien = tongsotien * (1 - phantram);
            }
        }
    }

    cout << "So tien ban phai tra khi di " << skm << "km la " << tongsotien << "vnd" << endl;

    
	return 0;
}
