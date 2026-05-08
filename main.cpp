#include <iostream>

int soma(int i, int x) {
    return i + x;
}

int subtracao(int i, int x) {
    return i - x;
}

int multiplicacao(int i, int x) {
    return i * x;
}

int main() {
    int x;
    std::cout << "Digite um número: " << std::endl;
    std::cin >> x;

    for(int i = 0; i < 11; i++) {
        std::cout << i << "+" << x << "=" << soma(i, x) << std::endl;
    }
    std:: cout << std::endl;

    for(int i = 0; i < 11; i++) {
        std::cout << i << "-" << x << "=" << subtracao(i, x) << std::endl;
    }
    std:: cout << std::endl;

    for(int i = 0; i < 11; i++) {
        std::cout << i << "*" << x << "=" << multiplicacao(i, x) << std::endl;
    }
    std:: cout << std::endl;

    return 0;
}