#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int n = 50, k = 0;
    int numero[n], pares[n];
    srand(time(NULL));


    for (int i = 0; i < n; i++) {
        numero[i] = rand() % 1000;
    }


    for (int i = 0; i < n; i++) {
        if (numero[i] % 2 == 1) {
            printf("A posi��o do n�mero �mpar %d �: %d\n", numero[i], i);
        }

        if (numero[i] % 2 == 0) {
            pares[k] = numero[i];
            printf("O n�mero � par: %d\n", pares[k]);
            k++;
        }

        if (numero[i] % 5 == 0) {
            printf("O n�mero � %d e � m�ltiplo de 5, sua posi��o �: %d\n", numero[i], i);
        }
    }


    return 0;
}
