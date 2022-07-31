// ? tìm nghiệm của phương trình e^x - 1.5 = 0 với độ chính xác bằng 10^-6

#include <iostream>
#include <math.h>

float fx(float x) {
    return exp(x) - 1.5;
}

int main(void) {
    float a = 0, b = 1, c;
    while(b-a > 1.0e-6) {
        c = (a+b)/2;
        if (fx(c) == 0) break;
        if (fx(c)*fx(a) > 0) a = c; else b = c;
    }
    std::cout << "Phuong trinh co nghiem la: " << c << std::endl;
    return 0;
}