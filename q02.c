#include <stdio.h>
#include <stdlib.h>


void troca(int *p, int *q) {
   int temp = *p;
   *p = *q;
   *q = temp;
}

int main() {
   int a = 10;
   int b = 20;

   printf("Antes da troca: a = %d, b = %d\n", a, b);

   troca(&a, &b);

   printf("Depois da troca: a = %d, b = %d\n", a, b);

   return 0;
}
