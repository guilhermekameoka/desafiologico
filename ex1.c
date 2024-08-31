#include <stdio.h>

int isFibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    int a = 0, b = 1, c = a + b;
    
    while (c <= n)
    {
        if (c == n)
        {
            return 1; // Faz parte da sequência
        }
        a = b;
        b = c;
        c = a + b; // Calcula o prox numero da sequência
    }
    return 0; // não faz parte da sequência
}

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (isFibonacci(num))
    {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    }
    else
    {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}