/*
Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo.
*/

#include <iostream>

using namespace std;

int main()
{
    int x;

    printf("Insira o número \n");

    cin >> x;

    if (x % 2 == 0)
    {
        x >= 100 ? printf("Maior ou igual a 100") : printf("Menor que 100");
    }
    else
    {
        x >= 0 ? printf("Positivo") : printf("Negativo");
    }

    return 0;
}