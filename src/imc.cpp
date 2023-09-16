/*
Calcule o peso ideal de uma pessoa. Dados de entrada: altura e sexo (“m”-masculino ou “f”-feminino).
Utilize as seguintes fórmulas para cálculo do peso ideal:
• Homem = (72,7 x altura) - 58
• Mulher = (62,1 x altura) - 44,7
*/

#include <iostream>

using namespace std;

int main()
{
    float altura;
    char sexo;

    printf("Insira seu sexo: \n m-masculino \n f-feminino\n");
    cin >> sexo;

    printf("Insira a sua altura: ");
    cin >> altura;

    if (sexo == 'm')
    {
        cout << (altura * 72.7) - 58;
    }
    else if (sexo == 'f')
    {
        cout << (altura * 62.1) - 44.7;
    }
    else
    {
        printf("Insira um sexo válido");
    }
}