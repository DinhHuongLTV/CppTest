#include <iostream>

int main(void) {
    int i = 10;
    int *p, *q, *r;
    p = q = r = &i;
    *p = *q**q + 2**r + 1;
    std::cout << *p << std::endl;
    return 0;
}