#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

int prin(int para){

if (para >= 0){

printf("%d \n", para );

prin(para -1);

}

return;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("DIGITE SEU PARAMETRO: \n");
    scanf("%d", &n);

    system("cls");

    prin(n);

    return 0;
}
