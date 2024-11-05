#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <Windows.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numeros[3][3],
        soma =0,
        resultado[6] = {0};

printf("digite 9 numeros: \n");

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        printf("Elemento: [%d] [%d] \n", i, j);
        scanf("%d",&numeros[i][j]);
    }
}

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
       resultado[i] += numeros [i][j];
       resultado[i + 3] += numeros [j][i];
    }
}

for(int i = 0; i < 6; i++){
      printf("a soma: %d \n",resultado[i] );
}

    return 0;
}

