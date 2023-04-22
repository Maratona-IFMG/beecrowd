/*
 * No planeta Alpha vive a criatura Blobs, que come precisamente 1/2 de seu suprimento de comida disponível todos os dias. Escreva um algoritmo que leia a capacidade inicial de suprimento de comida (em Kg), e calcule quantos dias passarão antes que Blobs coma todo esse suprimento até restar um quilo ou menos.

Entrada
A primeira linha de entrada contem um único inteiro N (1 ≤ N ≤ 1000), indicando o número de casos de teste. As N linhas seguintes contém um valor de ponto flutuante C (1 ≤ C ≤ 1000) correspondente à quantidade de comida disponível para Blobs.

Saída
Para cada caso de teste, imprima uma linha contendo o número de dias que Blobs irá demorar para comer todo seu suprimento de comida, seguido da palavra "dias".

Exemplo de Entrada
3
40.0
200.0
300.0
Exemplo de Saída
6 dias
8 dias
9 dias
 */
#include <iostream>


int main()
{
    std::ios_base::sync_with_stdio(false);
    int N, days {0};
    float value {1};


    std::cin >> N;
    std::cin.ignore();
    for(int i = 0; i < N; i++)
    {
       std::cin >> value;
       while(value > 1)
       {
           value = value / 2;
           days++;
       }
       std::cout << days << " dias" << std::endl;
       days = 0;
    }
    return EXIT_SUCCESS;
}