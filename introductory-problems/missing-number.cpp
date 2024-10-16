#include <iostream>

int main() {
    int n;
    std::cin >> n;

    long sum {0};
    int m;
    for (int i = 1; i < n; i++) {
        std::cin >> m;
        sum += m;
    }

    std::cout << (n + 1) * (n / 2.0) - sum;
}
