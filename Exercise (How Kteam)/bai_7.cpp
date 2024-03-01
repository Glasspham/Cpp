// Kiểm tra số tự mãn
#include <iostream>
#include <math.h>
using namespace std;

int Demsochuso(int &nInput) 
{
    int count(0);
    while (nInput != 0)
    {
        nInput /= 10;
        count ++;
    }
    return count;
}

bool Lasotuman(int &nInput)
{
    int Numofdigits = Demsochuso(nInput);
    int nRem, nSum(0);
    int nTemp = nInput;
    while(nTemp != 0)
    {
        // Tách từng chữ số của n từ phải sang trái
		nRem = nTemp % 10;

		// Tính tổng của các chữ số mũ (với mũ bằng số lượng chữ số của n)
		nSum = nSum + pow(nRem,Numofdigits);

		// Loại bỏ từng chữ số của n từ phải sang trái
		nTemp = nTemp / 10;
    }
    return (nSum == nInput);
}

int main()
{
	int nInput;
	cout << "Enter n(integer): ";
	cin >> nInput;

	if (Lasotuman(nInput))
	{
		cout << nInput << " la so tu man co " << Demsochuso(nInput) << " chu so." << endl;
	}
	else
	{
		cout << "Khong phai so tu man." << endl;
	}

    
	return 0;
}
