/*
Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o
imposto a ser pago.
*/

#include <iostream>

using namespace std;

int main()
{
    float preco;
    int ano;

    printf("Insira o preço do carro: ");
    cin >> preco;

    printf("Insira o ano do carro: ");
    cin >> ano;

    if (ano < 1990)
        cout << preco * 1.1;
    else
        cout << preco * 1.5;
}