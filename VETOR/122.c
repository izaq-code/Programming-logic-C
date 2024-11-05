#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <Windows.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

int numeros[2][2];

printf("digite 4 numeros: \n");

for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
        printf("Elemento: [%d] [%d] \n", i, j);
        scanf("%d",&numeros[i][j]);
    }
}

for(int i = 0; i < 2; i++){
    printf("\n");
    for(int j = 0; j < 2; j++){
        printf("[%d]", numeros[i][j] );
    }
}

    return 0;
}

