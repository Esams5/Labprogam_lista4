#include <stdio.h>

int main() {
    char string[100];
    char caracter;
    char *ptr;

    printf("Digite uma string: ");
    gets(string);

    printf("Digite um caracter a ser buscado na string: ");
    scanf("%c", &caracter);

    ptr = string;

    while (*ptr != '\0') {
        if (*ptr == caracter) {
            printf("O caracter '%c' foi encontrado na string.\n", caracter);
            break;
        }
        ptr++;
    }

    if (*ptr == '\0') {
        printf("O caracter '%c' nao foi encontrado na string.\n", caracter);
    }

    return 0;
}
