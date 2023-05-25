#include <stdio.h>

int string_length(char *str);

int main() {
    char str[100];
    int length;

    printf("Digite uma string: ");
    scanf("%s", str);

    length = string_length(str);

    printf("O tamanho da string é %d\n", length);

    return 0;
}

int string_length(char *str) {
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}
