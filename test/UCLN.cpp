#include <iostream>

int UCLN(int, int);

int main(void) {
    int a, b;
    std::cin >> a >> b;
    std::cout << "Ket Qua: " << UCLN(a, b);
    return 0;
}

int UCLN(int num1, int num2) {
    while(num1!=num2) {
        if (num1 > num2) num1 -= num2;
        else if (num2 > num1) num2 -= num1;
    }
    return num1;


    // int r;
    // if (num1 < num2) {
    //     int t = num1;
    //     num1 = num2;
    //     num2 = t;
    // }
    // while(num1 != num2) {
    //     r = num1 - num2;
    //     if (r > num2) num1 = r; 
    //     else num1 = num2; num2 = r;
    // }
    // return num1;
}