#include <iostream>

int main() {
    int height;

    std::cout << "Insira a altura para gerar o desenho: ";
    std::cin >> height;

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height; j++) {
            if (i == 1 || i == height || j == 1 || j == height) {
                std::cout << '*';
            } else {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
