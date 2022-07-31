#include <iostream>

int main(void) {
    int sl10d, sl20d, sl50d;
    for (sl50d = 0; sl50d <= 2; sl50d++) {
        for (sl20d = 0; sl20d <= 5; sl20d++) {
            for (sl10d = 0; sl10d <=10; sl10d++) {
                if (sl50d*50 + sl10d*10 + sl20d*20 == 100)
                    std::cout << "10d: " << sl10d << " " << "20d: " << sl20d << " " << "50d: " << sl50d << std::endl; 
            }
        }
    }
    return 0;
}