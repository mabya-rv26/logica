#include <iostream>

int soma(int a, int b) {

    return a + b;
}

int subtrair(int a, int b) {

    return a - b;
}

int multiplicacao(int a, int b) {
    return a*b;
}

float divisao(float a, float b) {
    return a / b;
}

int main() {
    std::cout <<"Calculadora"<< std::endl;

    int resultado1 = soma(5, 10);
    std::cout <<"O resultado da soma é: "<<resultado1<< std::endl;

    int resultado2 = subtrair(5, 10);
    std::cout <<"O resultado da subtraçao é: "<<resultado2<< std::endl;

    int resultado3 = multiplicacao(5, 10);
    std::cout <<"O resultado da multiplicação é: "<<resultado3<< std::endl;

    float resultado4 = divisao(5, 10);
    std::cout <<"O resultado da divisão é: "<<resultado4<< std::endl;

    return 0;
}