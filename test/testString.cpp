// ? T66
#include <iostream>
#include <string>

int main(void) {
    // char s[10];
    // std::cin.getline(s, 10);
    // std::cout << s << std::endl;
    // std::cin.getline(s, 10);
    // std::cout << s << std::endl;
    char temp[1024];
    std::string str1, str2;
    getline(std::cin, str1);
    // std::cin.ignore();
    // getline(std::cin, str2);
    str1.copy(temp, 3, 0);
    std::cout << str1 << std::endl;
    std::cout << temp << std::endl;
    return 0;
}
