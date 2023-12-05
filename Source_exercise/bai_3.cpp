// Tính tổng của 1 con số có từ 2 số
#include <iostream>
using namespace std;

int tinhTongCacChuSoDungWhile(int nInput)
{
	int nRem, nSum = 0;
	while (nInput != 0)
	{
		// Lấy chữ số cuối của số nguyên sử dụng toán tử chia lấy dư (Modulus)
		nRem = nInput % 10;

		// Cộng chữ số cuối vào biến Sum
		nSum += nRem;

		// Xóa chữ số cuối bằng cách sử dụng toán tử chia lấy phần nguyên (Division)
		nInput /= 10;
	}
	return nSum;
}

int tinhTongCacChuSoDungFor(int nInput)
{
	int nRem, nSum = 0;
	for (; nInput != 0;)
	{
		nRem = nInput % 10;
		nSum = nSum + nRem;
		nInput = nInput / 10;
	}
	return nSum;
}

int main()
{
    // Source.cpp
	int nInput;
	cout << "Enter n(integer): ";
	cin >> nInput;

    // Use loop While
	int nSum = tinhTongCacChuSoDungWhile(nInput);
	cout << "Tong cac chu so(While): " << nSum << endl;

    // Use loop For
    int nSum1 = tinhTongCacChuSoDungFor(nInput);
	cout << "Tong cac chu so(For): " << nSum1 << endl;

    
	return 0;
}
