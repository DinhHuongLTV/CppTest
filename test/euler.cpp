// ? tính pi^2 / 6, đk dừng 1/n^2 < 10^-6 T56

#include <iostream>
#include <math.h>

int main(void) {
    float i = 1.0, res = 0;
    do {
        res += 1.0/pow(i,2);
        i++;
    } while(1.0/pow(i,2) > 1.0e-6);
    std::cout << "Ket qua la: " << res << std::endl;
    return 0;
}