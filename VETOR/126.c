#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <Windows.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

int num = 0, num1 = 0, numeros[num][num1], soma;

printf("digite 2 numeros: \n");
scanf("%d %d",&num , &num1);

system("cls");
printf("Digite os numeros da sua matriz [%d]x[%d]: \n", num, num1);

for(int i = 1; i <= num; i++){
    for(int j = 1; j <= num1; j++){
        printf("Elemento: [%d] [%d] \n", i, j);
        scanf("%d",&numeros[i][j]);
    }
}

system("cls");
printf("os numeros da sua matriz [%d]x[%d]: \n", num, num1);

for(int i = 1; i <= num; i++){
    printf("\n");
        for(int j = 1; j <= num1; j++){
        printf("[%d]", numeros[i][j] );
    }
}
    return 0;
}

