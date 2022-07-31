#include <iostream>

int main(void) {
    int m,n, kq = 0;
    std::cin >> m >> n;
    // for (; m; m>>=1, n<<=1) {
    //     std::cout << m << " " << n << " " << kq << std::endl;
    //     if (m%2) kq += n;
    // }
    while(m) {
        std::cout << m << " " << n << " " << kq << std::endl;
        if (m%2) kq += n;
        m >>= 1;
        n <<= 1;
    }
    std::cout << "KQ: " << kq;
    return 0;
}