#include "header.h"

// Hàm chuyển đổi từ số thập phân sang số nhị phân
string DECtoBIN(int decimalNumber) 
{
    if (decimalNumber == 0) 
        return "00000000"; // Return 8 zeros if the number is 0
    
    string binaryNumber = "";

    while (decimalNumber > 0) 
    {
        int remainder = decimalNumber % 2;
        binaryNumber += to_string(remainder);
        decimalNumber /= 2;
    }

    // Add leading zeros if the binary number is less than 8 digits
    while (binaryNumber.length() < 8) 
        binaryNumber = "0" + binaryNumber;
   
    return binaryNumber;
}

// Hàm chuyển đổi từ số thập phân trong khoảng (0;1) sang số nhị phân
string DECtoBINsophay(double decimalNumber, int precision) 
{
    string binaryNumber = "";
    
    while (decimalNumber > 0 && precision > 0) 
    {
        decimalNumber *= 2;
        
        if (decimalNumber >= 1) 
        {
            binaryNumber += '1';
            decimalNumber -= 1;
        } 
        else 
            binaryNumber += '0';
        
        precision--;
    }

    // Ensure the result has exactly 'precision' digits after the decimal point
    while (precision > 0) 
    {
        binaryNumber += '0';
        precision--;
    }

    return binaryNumber;
}

// Hàm chuyển đổi từ số nhị phân sang số thập phân
int BINtoDEC(string binaryNumber) 
{
    int decimalNumber = 0;
    int power = 0;

    // Browse through the binary number string from right to left
    for (int i = binaryNumber.length() - 1; i >= 0; --i) {
        // If bit at position i is '1', add to result
        if (binaryNumber[i] == '1') {
            decimalNumber += pow(2, power);
        }
        // Increase the exponent by 1
        power++;
    }

    return decimalNumber;
}

