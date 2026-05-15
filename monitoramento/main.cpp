#include <iostream>

int soma(int x , int i);

  //T1 - Declarar e inicializar
    const int N = 3;
    int temperaturas[N];

int main () {
    double media;
    int x;

    //T2 - Leitura dos valores
    for(int i = 0; i < N; i++) {
        int dia = i + 1;
        std::cout << "Digite a temperatura do dia " << dia << ": ";
        std::cin >> temperaturas[i];
        x = soma(x, i);
        media = x/N;

    }

    //T3 - Imprimir valores
    std::cout << "\nTemperaturas:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << "Dia " << i + 1 << ": " << temperaturas[i] << std::endl;
    }

    //T4 - Soma e média das temperaturas
    std::cout << "\nSoma do mês: " << x << std::endl;
    std::cout << "Média do mês: " << media << std::endl;

    //T5 - Maior e menor temperaturas
    int maior = temperaturas[0];
    int menor = temperaturas[0];
    int dia_maior = 1;
    int dia_menor = 1;
    
    for(int i = 0; i < N; i++) {
        if(temperaturas[i] > maior) {
            maior = temperaturas[i];
            dia_maior = i + 1;

        } else if(temperaturas[i] < menor) {
            menor = temperaturas[i];
            dia_menor = i + 1;
        }        
    } 

    std::cout << "\nTemperatura mais alta: " << maior << "\nDia: " << dia_maior<< std::endl;
    std::cout << "\nTemperatura mais baixa: " << menor << "\nDia: " << dia_menor << std::endl;

    //T6 - Dias acima da média
    std::cout << "\nDias acima da média:" << std::endl;
    for(int i = 0; i < N; i++) {
        int dia_media = i + 1;
        if(temperaturas[i] > media) {
            std::cout << "Dia " << dia_media << ": " << temperaturas[i] << std::endl;
        }

    //T7 - Busca sequencial
    bool encontrei = 0;
    
    std:: cout << "Qual temperatura você quer procurar? " << std::endl;

    }


    return 0;
}

int soma(int x, int i) {
    return x + temperaturas[i];
}