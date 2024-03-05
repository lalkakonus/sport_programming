//
// Created by Sergey Kononov on 03.03.24.
//
#include <iostream>

int main() {
    int a1, b1, a2, b2;

    // Parse data in X:X format
    char c, _;
    std::cin >> c;
    a1 = std::atoi(&c);
    std::cin >> _ >> c;
    b1 = std::atoi(&c);

    // Parse data in X:X format
    std::cin >> c;
    a2 = std::atoi(&c);
    std::cin >> _ >> c;
    b2 = std::atoi(&c);

    // Parse first round place
    int val;
    std::cin >> val;

    if (a1 + a2 > b1 + b2) {
        std::cout << 0;
        return 0;
    }

    // First match was at home; second match at guests
    if (val == 1) {
        if (a1 + a2 == b1 + b2) {
            if (a2 <= b1) {
                std::cout << 1;
            } else {
                std::cout << 0;
            }
        //  b1 + b2 - a1 <= b1 <=> b2 <= a1
        } else if (b2 <= a1) {
            std::cout << b1 + b2 - (a1 + a2) + 1;
        } else {
            std::cout << b1 + b2 - (a1 + a2);
        }
    // First match was at guests; second match at home
    } else {
        if (a1 + a2 == b1 + b2) {
            if (a1 <= b2) {
                std::cout << 1;
            } else {
                std::cout << 0;
            }
        } else if (a1 <= b2) {
            std::cout << b1 + b2 - (a1 + a2) + 1;
        } else {
            std::cout << b1 + b2 - (a1 + a2);
        }
    }
}