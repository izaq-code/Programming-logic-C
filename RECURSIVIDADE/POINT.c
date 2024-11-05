#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int n = 100;
int numero[n], result = 0;

  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    numero[i] = rand() % 1000 ;
  }

    for (int i = 0; i < n; i++) {

    if(numero[i] > result){
        result = numero[i];
    }

}

    printf("%d", result );

   return (0);
}
