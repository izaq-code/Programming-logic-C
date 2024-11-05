#include <stdio.h>

int main() {

   int original[] = {1,2,3,4,5,6};
   int count = sizeof(original) / sizeof(int);
   int revertido[count], i, j;


   for (i = count-1, j = 0; j < count; i--, j++) {
      revertido[j] = original[i];
   }

   for (i = 0; i < count; i++) {
      printf("%d ", revertido[i]);
   }

   return (0);
}
