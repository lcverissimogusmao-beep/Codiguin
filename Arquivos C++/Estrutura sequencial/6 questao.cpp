#include <iostream>
#include <iomanip>

int main() {
    double r;
    if (!(std::cin >> r)) return 0;
    const double PI = 3.14159;
    double area = PI * r * r;
    std::cout << std::fixed << std::setprecision(3) << area << std::endl;
    return 0;
}
