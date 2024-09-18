#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    if (a == 1 && b == 2) std::cout << 3 << std::endl;
    else if (a == 1 && b == 3) std::cout << 2 << std::endl;
    else if (a == 2 && b == 1) std::cout << 3 << std::endl;
    else if (a == 2 && b == 3) std::cout << 1 << std::endl;
    else if (a == 3 && b == 1) std::cout << 2 << std::endl;
    else std::cout << 1 << std::endl;
    return 0;
}