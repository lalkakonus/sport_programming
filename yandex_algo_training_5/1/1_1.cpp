//
// Created by Sergey Kononov on 03.03.24.
//
#include <iostream>

int main() {
    long long int p, v, q, m;
    std::cin >> p >> v >> q >> m;
    if (p > q) {
        std::swap(p, q);
        std::swap(v, m);
    }

    // ...PPP..........
    // ..........QQQ...
    if (p + v < q - m) {
        std::cout << (2 * (v + m + 1)) << std::endl;
        return 0;
    }

    // ...PPP....
    // ....QQQ...
    if ((p + v >= q - m) && (p + v <= q + m) && (p - v <= q - m)) {
        std::cout << (q + m - (p - v) + 1) << std::endl;
        return 0;
    }

    // ...PPP... or ....P....
    // ....Q....    ...QQQ...
    std::cout << (1 + 2 * std::max(v, m)) << std::endl;
    return 0;
}