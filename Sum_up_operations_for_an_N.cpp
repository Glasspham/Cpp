#include <iostream>
#include <cmath>

int reverseN(int n) {
    int reversedN = 0;
    while (n > 0) {
        int a = n % 10;
        reversedN = reversedN * 10 + a;
        n /= 10;
    }
    return reversedN;
}

bool doixung(int n) {
    int reversedN = reverseN(n);
    return (reversedN == n);
}

bool chinhphuong(int n) {
    int sqrtN = sqrt(n);
    return (sqrtN * sqrtN == n);
}

bool soNT(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int sumle(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        n /= 10;
    }
    return sum;
}

int sumsoNT(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        if (soNT(digit)) {
            sum += digit;
        }
        n /= 10;
    }
    return sum;
}

int sumchinhphuong(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        if (chinhphuong(digit)) {
            sum += digit;
        }
        n /= 10;
    }
    return sum;
}

int main() {
    int choice, n;
    char option;

    do {
        std::cout << "Nhap so nguyen duong n: ";
        std::cin >> n;

        std::cout << "Chon mot trong cac lua chon sau:\n";
        std::cout << "a. Tra ve so dao cua so do\n";
        std::cout << "b. Kiem tra co phai la so doi xung\n";
        std::cout << "c. Kiem tra co phai la so chinh phuong\n";
        std::cout << "d. Kiem tra co phai la so nguyen to\n";
        std::cout << "e. Tinh tong cac chu so le\n";
        std::cout << "f. Tinh tong cac chu so nguyen to\n";
        std::cout << "g. Tinh tong cac chu so chinh phuong\n";
        std::cout << "Chon lua chon (a, b, c, d, e, f, g): ";
        std::cin >> option;

        switch (option) {
            case 'a':
                std::cout << "So dao cua " << n << " la: " << reverseN(n) << std::endl;
                break;
            case 'b':
                if (doixung(n)) {
                    std::cout << n << " la so doi xung\n";
                } else {
                    std::cout << n << " khong phai la so doi xung\n";
                }
                break;
            case 'c':
                if (chinhphuong(n)) {
                    std::cout << n << " la so chinh phuong\n";
                } else {
                    std::cout << n << " khong phai la so chinh phuong\n";
                }
                break;
            case 'd':
                if (soNT(n)) {
                    std::cout << n << " la so nguyen to\n";
                } else {
                    std::cout << n << " khong phai la so nguyen to\n";
                }
                break;
            case 'e':
                std::cout << "Tong cac chu so le cua " << n << " la: " << sumle(n) << std::endl;
                break;
            case 'f':
                std::cout << "Tong cac chu so nguyen to cua " << n << " la: " << sumsoNT(n) << std::endl;
                break;
            case 'g':
                std::cout << "Tong cac chu so chinh phuong cua " << n << " la: " << sumchinhphuong(n) << std::endl;
                break;
            default:
                std::cout << "Lua chon khong hop le!\n";
        }

        std::cout << "Ban muon thuc hien lai (1: Co / 0: Khong)? ";
        std::cin >> choice;

    } while (choice == 1);

    return 0;
}
