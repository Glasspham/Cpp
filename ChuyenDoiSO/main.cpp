#include "header.h"

int main()
{
    int select;
    cout << "Ban can chuyen gi: " << endl;
    cout << "1. Tu DEC sang BIN." << endl;
    cout << "2. Tu BIN sang DEC." << endl;
    cout << "3. Tu DEC sang OCT." << endl;
    cout << "4. Tu OCT sang DEC." << endl;
    cout << "5. Tu DEC sang HEX." << endl;
    cout << "6. Tu HEX sang DEC." << endl;
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
            cout << "So nhi phan tuong ung cua " << decimalNumber << " la " << DECtoBIN(decimalNumber) << endl;
        }
        else if(select_1 == 2)
        {
            cout << "So thuoc khaong (0;1)!" << endl;
            double decimalNumber;
            int precision(8);
            cout <<  "Nhap so thuoc khoang (0;1): ";
            cin >> decimalNumber;
            cout << "So nhi phan sap si cua " << decimalNumber << " la " << DECtoBINsophay(decimalNumber, precision) << endl;
        }
    }
    else if(select == 2)
    {
        cout << "Tu BIN sang DEC!" << endl;
        string binaryNumber;
        cout << "Nhap day so vao: ";
        cin >> binaryNumber;
        cout << "He co so 10 tuong ung cua " << binaryNumber << " la " << BINtoDEC(binaryNumber) << endl;
    }
    else if(select == 3)
    {
        cout << "Tu DEC sang OCT!" << endl;
        int num;
        cout << "Nhap day so vao: ";
        cin >> num;
        cout << "He co so 8 tuong ung cua " << num << " la " << oct << num << endl;
    }
    else if(select == 4)
    {
        cout << "Tu OCT sang DEC!" << endl;
        string octalNumber;
        cout << "Nhap day so vao: ";
        cin >> octalNumber;
        int decimalNumber = stoi(octalNumber, 0, 8);

        cout << "He co so 10 tuong ung cua " << octalNumber << " la " << decimalNumber << endl;
    }
    else if(select == 5)
    {
        cout << "Tu DEC sang OCT!" << endl;
        int num;
        cout << "Nhap day so vao: ";
        cin >> num;
        cout << "He co so 16 tuong ung cua " << num << " la " << hex << num << endl;
    }
    else if(select == 6)
    {
        cout << "Tu HEX sang DEC!" << endl;
        string hexaNumber;
        cout << "Nhap day so vao: ";
        cin >> hexaNumber;
        int decimalNumber = stoi(hexaNumber, 0, 16);

        cout << "He co so 10 tuong ung cua " << hexaNumber << " la " << decimalNumber << endl;
    }
    
}