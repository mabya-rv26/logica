#include <iostream>

int soma(int a, int b);
int subtracao(int a, int b);
int multiplicacao(int a, int b);
int divisao(int a, int b);

int main() 
{
    std::cout <<"Calculadora\nNúmeros: 6 e 10"<<std::endl;

    std::cout <<"Soma:"<<soma(6, 10)<< std::endl;

    std::cout <<"Subtração:"<<subtracao(6, 10)<< std::endl;

    std::cout <<"Multiplicação:"<<multiplicacao(6, 10)<< std::endl;
    
    std::cout <<"Divisão:"<<divisao(6, 10)<< std::endl;

    return 0;
}

int soma(int a, int b) {
    return a+b;
}

int subtracao(int a, int b) {
    return a-b;
}

int multiplicacao(int a, int b) {
    return a*b;
}

int divisao(int a, int b) {
    return a/b;
}
 

