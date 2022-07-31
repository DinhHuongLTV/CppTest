// ? T57

#include <iostream>

int main(void) {
    char c;
    int n1, n2, n3, n4;
    n1 = n2 = n3 = n4 = 0;
    do {
        std::cin >> c;
        if (c >= 'a' && c <= 'z') n1++;
        else if (c >= 'A' && c <= 'Z') n2++;
        else if (c >= '0' && c <= '9') n3++;
        else n4++;
        std::cout << "Chu thuong: " << n1 << "\nChu hoa: " << n2 << "\nSo: " << n3 << "\nKy tu khac: " << n4 << std::endl;
    } while(c != '.');

    return 0;
}