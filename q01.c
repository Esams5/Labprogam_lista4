#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, s;
    int *px = &x, *py = NULL, *ps = NULL;

    py = &y;
    ps = &s;

    puts("Entre com o valor: ");
    scanf("%d",px); 

    puts("Entre com o outro valor: ");
    scanf("%d",py); 

    *ps = *px + *py;

    printf("Soma de %d com %d = %d\n",*px, *py, *ps);
    printf("Endereços: x: %p, y: %p, s: %p\n",px, py, ps);

    return 0;
}