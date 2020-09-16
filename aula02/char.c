#include <stdio.h>
#include <limits.h>

void main() {
   unsigned char c;

   printf("O tamanho do char eh: %u em bytes / %u em bits \n", sizeof c, (sizeof c * 8));

   c = 128;
   printf("O conteudo de c eh: %d \n", c);

}
