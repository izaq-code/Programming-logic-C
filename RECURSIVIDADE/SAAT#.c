#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

void Binario(int n){

if (n == 0){
    return;
}

Binario(n / 2);

printf("%d", n % 2);

}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int f;

    printf("DIGITE SEU NUMERO DECIMAL: \n");
    scanf("%d", &f);

   if(f == 0){

    system("cls");
    printf("0 \n");

   }else{

    system("cls");
    Binario(f);

   }

    printf("\n");
    return 0;
}
