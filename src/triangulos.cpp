/*
Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
• Equiláteros: tem os comprimentos dos três lados iguais;
• Isósceles: tem os comprimentos de dois lados iguais;
• Escaleno: tem os comprimentos dos três lados diferentes.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    printf("Insira os três valores dos lados A, B e C do triangulo \n");

    cin >> a;
    cin >> b;
    cin >> c;

    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b == c)
        {
            printf("Equilátero");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Isóceles");
        }
        else if (a != b && b != c && c != a)
        {
            printf("Escaleno");
        }
    }
    else
    {
        printf("Não é um triangulo");
    }

    return 0;
}
