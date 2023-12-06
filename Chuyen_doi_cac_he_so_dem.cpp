#include <iostream>
#include <cmath>
#include <string>
#include <bitset>
using namespace std;

string DECtoBIN(double num, int precision) // Trường hợp đặc biệt của DEC là số phẩy
{
    string binary = "0.";

    while (num > 0 && precision--) 
    {
        num *= 2;
        if (num >= 1) 
        {
            binary += '1';
            num -= 1;
        } 
        else 
        {
            binary += '0';
        }
    }

    return binary;
}

int main()
{
    int select;
    cout << "Ban can chuyen gi: " << endl;
    cout << "1. Tu DEC sang BIN." << endl;
    cout << "2. Tu DEC sang OCT." << endl;
    cout << "3. Tu DEC sang HEX." << endl;

    cout << "4. Tu BIN sang DEC." << endl;
    cout << "5. Tu BIN sang OCT." << endl;
    cout << "6. Tu BIN sang HEX." << endl;

    cout << "7. Tu OCT sang DEC." << endl;
    cout << "8. Tu OCT sang BIN." << endl;
    cout << "9. Tu OCT sang HEX." << endl;

    cout << "10. Tu HEX sang DEC." << endl;
    cout << "11. Tu HEX sang BIN." << endl;
    cout << "12. Tu HEX sang OCT." << endl;
    cout << "=========================" << endl;
    cout << "Nhap so cua chuc nang: ";
    cin >> select;
    cout << "=========================" << endl;

    if(select == 1)
    {
        int select_1;
        cout << "Tu DEC sang BIN!" << endl;
        cout << "Co 2 lua chon: " << endl;
        cout << "1.So tu nhien." << endl;
        cout << "2.So thuoc khaong (0;1)." << endl;
        cout << "=========================" << endl;
        cout << "Nhap so cua chuc nang: ";
        cin >> select_1;
        cout << "=========================" << endl;
        if(select_1 == 1)
        {   
            cout << "So tu nhien!" << endl;
            int decimalNumber;
            cout <<  "Nhap so tu nhien: ";
            cin >> decimalNumber;

            string binaryNumber = bitset<8>(decimalNumber).to_string();
            cout << "So nhi phan tuong ung cua " << decimalNumber << " la " << binaryNumber << endl;
        }
        else if(select_1 == 2)
        {
            cout << "So thuoc khaong (0;1)!" << endl;
            double decimalNumber;
            int precision(8);
            cout <<  "Nhap so thuoc khoang (0;1): ";
            cin >> decimalNumber;
            cout << "So nhi phan sap si cua " << decimalNumber << " la " << DECtoBIN(decimalNumber, precision) << endl;
        }
    }

    else if(select == 2)
    {
        cout << "Tu DEC sang OCT!" << endl;
        int num;
        cout << "Nhap day so vao: ";
        cin >> num;
        cout << "He co so 8 tuong ung cua " << num << " la " << oct << num << endl;
    }

    else if(select == 3)
    {
        cout << "Tu DEC sang HEX!" << endl;
        int num;
        cout << "Nhap day so vao: ";
        cin >> num;
        cout << "He co so 16 tuong ung cua " << num << " la " << uppercase << hex << num << endl;
    }

    else if(select == 4)
    {
        cout << "Tu BIN sang DEC!" << endl;
        string binaryNumber;
        cout << "Nhap day so vao: ";
        cin >> binaryNumber;

        int decimalNumber = bitset<8>(binaryNumber).to_ulong();
        cout << "He co so 10 tuong ung cua " << binaryNumber << " la " << decimalNumber << endl;
    }

    else if(select == 5)
    {
        cout << "Tu BIN sang OCT." << endl;
        string binaryNumber;
        cout << "Nhap day so vao: ";
        cin >> binaryNumber;

        int decimalNumber = bitset<8>(binaryNumber).to_ulong();
        cout << "He co so 8 tuong ung cua " << binaryNumber << " la " << oct << decimalNumber << endl;
    }

    else if(select == 6)
    {
        cout << "Tu BIN sang HEX." << endl;
        string binaryNumber;
        cout << "Nhap day so vao: ";
        cin >> binaryNumber;

        int decimalNumber = bitset<8>(binaryNumber).to_ulong();
        cout << "He co so 16 tuong ung cua " << binaryNumber << " la " << uppercase << hex << decimalNumber << endl;
    }

    else if(select == 7)
    {
        cout << "Tu OCT sang DEC!" << endl;
        string octalNumber;
        cout << "Nhap day so vao: ";
        cin >> octalNumber;
        int decimalNumber = stoi(octalNumber, 0, 8);

        cout << "He co so 10 tuong ung cua " << octalNumber << " la " << decimalNumber << endl;
    }
    
    else if(select == 8)
    {
        cout << "Tu OCT sang BIN!" << endl;
        string octalNumber;
        cout << "Nhap day so vao: ";
        cin >> octalNumber;

        int decimalNumber = stoi(octalNumber, 0, 8);
        string binaryNumber = bitset<8>(decimalNumber).to_string();
        cout << "So nhi phan tuong ung cua " << octalNumber << " la " << binaryNumber << endl;
    }

    else if(select == 9)
    {
        cout << "Tu OCT sang HEX!" << endl;
        string octalNumber;
        cout << "Nhap day so vao: ";
        cin >> octalNumber;

        int decimalNumber = stoi(octalNumber, 0, 8);
        cout << "He co so 16 tuong ung cua " << octalNumber << " la " << uppercase << hex << decimalNumber << endl;
    }

    else if(select == 10)
    {
        cout << "Tu HEX sang DEC!" << endl;
        string hexaNumber;
        cout << "Nhap day so vao: ";
        cin >> hexaNumber;
        int decimalNumber = stoi(hexaNumber, 0, 16);

        cout << "He co so 10 tuong ung cua " << hexaNumber << " la " << decimalNumber << endl;
    }
    
    else if(select == 11)
    {
        cout << "Tu HEX sang BIN!" << endl;
        string hexaNumber;
        cout << "Nhap day so vao: ";
        cin >> hexaNumber;

        int decimalNumber = stoi(hexaNumber, 0, 16);
        string binaryNumber = bitset<8>(decimalNumber).to_string();
        cout << "So nhi pha tuong ung cua " << hexaNumber << " la " << binaryNumber << endl;
    }

    else if(select == 12)
    {
        cout << "Tu HEX sang OCT!" << endl;
        string hexaNumber;
        cout << "Nhap day so vao: ";
        cin >> hexaNumber;

        int decimalNumber = stoi(hexaNumber, 0, 16);
        cout << "He co so 10 tuong ung cua " << hexaNumber << " la " << oct << decimalNumber << endl;
    }

    return 0;
}
