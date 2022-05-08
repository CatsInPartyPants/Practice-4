#include <iostream>

int main()
{
    int a = 54, b = 100, c= 10, d = 10;
    if (a > b) {
        std::cout << a;
    }
    else if (a == b && c == d) {
        std::cout << a + b;
    }
    else {
        std::cout << b;
    }
}


