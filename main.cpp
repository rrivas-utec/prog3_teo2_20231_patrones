#include <iostream>
#include "uvector.h"

void ejemplo_1() {
    utec::vector v1 = {10, 20, 30};
    for (int i = 0; i < v1.size(); ++i) {
        std::cout << v1[i] << std::endl;
    }
    std::cout << v1 << std::endl;
}

void ejemplo_2() {
    utec::vector v1 = {10, 20, 30};
    auto v2 = v1; // Copia
    v2[1] = 200;
    std::cout << v2 << std::endl;
    std::cout << v1 << std::endl;
}

void ejemplo_3() {
    utec::vector v1 = {10, 20, 30};
    utec::vector v2;
    v2 = v1;            // Asignacion
    v2[1] = 200;
    std::cout << v2 << std::endl;
    std::cout << v1 << std::endl;
}

void ejemplo_4() {
    utec::vector v1 = {10, 20, 30};
    utec::vector v2 = {40, 50, 60};
    v2 = v1;            // Asignacion
    v2[1] = 200;
    std::cout << v2 << std::endl;
    std::cout << v1 << std::endl;
}

int main() {
    ejemplo_3();
    return 0;
}
