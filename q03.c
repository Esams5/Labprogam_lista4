#include <stdio.h>

void menorValor(int *pMenor, int numero);

int main() {
    int numero, menor;
    int *pMenor = &menor;

    printf("Digite um numero inteiro (negativo para sair): ");
    scanf("%d", &numero);

    menor = numero;

    while(numero >= 0) {
        printf("O menor valor digitado até agora é: %d\n", menor);
        printf("Digite um numero inteiro (negativo para sair): ");
        scanf("%d", &numero);

        menorValor(pMenor, numero);
    }

    printf("Programa encerrado.");

    return 0;
}

void menorValor(int *pMenor, int numero) {
    if (numero >= 0 && numero < *pMenor) {
        *pMenor = numero;
    }
}
