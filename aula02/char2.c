#include <stdio.h>
#include <limits.h>

void main() {
   unsigned char c;
   unsigned int i;

   printf("O tamanho do char eh: %u em bytes / %u em bits \n", sizeof c, (sizeof c * 8));
   printf("O tamanho do char eh: %u em bytes / %u em bits \n", sizeof i, (sizeof i * 8));

   c = 128;
   i = 129;
   printf("O conteudo de c eh: %d \n", c);
   printf("O conteudo de i eh: %d \n", i);

}
