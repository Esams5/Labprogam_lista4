#include <stdio.h>

void copiar_string(char *destino, char *origem) {
    while (*origem != '\0') {
        *destino = *origem;
        origem++;
        destino++;
    }
    *destino = '\0';
}

int main() {
    char str1[100], str2[100];
    printf("Digite uma string: ");
    fgets(str1, 100, stdin);

    copiar_string(str2, str1);

    printf("String copiada: %s", str2);

    return 0;
}
