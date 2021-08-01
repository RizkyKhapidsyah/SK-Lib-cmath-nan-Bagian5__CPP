#include <iostream>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    double f1 = std::nan("1");
    std::uint64_t f1n; std::memcpy(&f1n, &f1, sizeof f1);
    std::cout << "nan(\"1\") = " << f1 << " (" << std::hex << f1n << ")\n";

    double f2 = std::nan("2");
    std::uint64_t f2n; std::memcpy(&f2n, &f2, sizeof f2);
    std::cout << "nan(\"2\") = " << f2 << " (" << std::hex << f2n << ")\n";

    _getch();
    return 0;
}