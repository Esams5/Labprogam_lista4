#include <stdio.h>

void concatena(char *s1, char *s2);

int main()
{
    char string1[100], string2[100];

    printf("Digite a primeira string: ");
    scanf("%s", string1);

    printf("Digite a segunda string: ");
    scanf("%s", string2);

    concatena(string1, string2);

    printf("As strings concatenadas sao: %s\n", string1);

    return 0;
}

void concatena(char *s1, char *s2)
{
    while (*s1 != '\0') {
        s1++;
    }

    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0';
}
