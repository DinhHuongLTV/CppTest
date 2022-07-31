#include <iostream>

int main(void) {
    int ga, cho, tongChan = 100, soLuong = 36;
    for (ga = 1; ga < soLuong; ga++ ) {
        cho = soLuong - ga;
        if (ga*2 + cho*4 == 100)
            std::cout << "So luong ga: " << ga << std::endl << "So luong cho: " << cho << std::endl;
    }
    return 0;
}