#include <stdio.h>

int main()
{
    int INDICE = 12, SOMA = 0, K = 1;

    while (K < INDICE)
    {
        K = K + 1;
        SOMA = SOMA + K;
    }

    printf("O valor final de SOMA é: %d\n", SOMA);
    // O valor final da soma deverá ser 77

    return 0;
}