/*
 *
 * Entrada
    A entrada contém um inteiro N, (1 ≤ N ≤ 1000) correspondente ao número de casos de teste, seguido de N linhas, cada linha contendo um número (1 ≤ V ≤ 10100) correspondente ao valor que João quer montar com os leds.
    Saída
    Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para montar o valor desejado, seguido da palavra "leds".
    Exemplo de Entrada
    115380
    2819311
    23456
    Exemplo de Saída
    27 leds
    29 leds
    25 leds
 *
 * */
#include <iostream>


int main()
{
    std::ios_base::sync_with_stdio(false);
    int N, leds {0};
    std::string number;

    std::cin >> N;
    std::cin.ignore();
    for(int i = 0; i < N; i++)
    {
        std::getline(std::cin, number);
        for(char c: number){
            switch(c)
            {
                case '1':
                    leds += 2;
                    break;
                case '2':
                    leds += 5;
                    break;
                case '3':
                    leds += 5;
                    break;
                case '4':
                    leds += 4;
                    break;
                case '5':
                    leds += 5;
                    break;
                case '6':
                    leds += 6;
                    break;
                case '7':
                    leds += 3;
                    break;
                case '8':
                    leds += 7;
                    break;
                case '9':
                    leds += 6;
                    break;
                case '0':
                    leds += 6;
                    break;
            }
        }
        std::cout << leds << " leds" << std::endl;
        leds = 0;
    }
    return EXIT_SUCCESS;
}