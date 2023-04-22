/*
 * Leia dois valores inteiros M e N indefinidamente. A cada leitura, calcule e escreva a soma dos fatoriais de cada um dos valores lidos. Utilize uma variável apropriada, pois cálculo pode resultar em um valor com mais de 15 dígitos.

Entrada
O arquivo de entrada contém vários casos de teste. Cada caso contém dois números inteiros M (0 ≤ M ≤ 20) e N (0 ≤ N ≤ 20). O fim da entrada é determinado por eof.

Saída
Para cada caso de teste de entrada, seu programa deve imprimir uma única linha, contendo um número que é a soma de ambos os fatoriais (de M e N).

Exemplo de Entrada
4 4
0 0
0 2
Exemplo de Saída
48
2
3
 */

#include <iostream>


unsigned long long fact(int number)
{
    unsigned long long f {1};
    for(int i = 2; i <= number; i++){
        f *= i;
    }
    return f;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int a, b;

    while(std::cin >> a >> b)
    {
        std::cout << fact(a) + fact(b) << std::endl;
    }

    return EXIT_SUCCESS;
}
