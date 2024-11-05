#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero_pecas;

    //printf("Digite aqui quantas peças tem: \n");
    scanf("%d", &numero_pecas);

    int pecas [numero_pecas- 1];

    //printf("Digite aqui as peças presentes (números separados por espaço): \n");
    for(int i = 0; i < numero_pecas - 1; i++) {
        scanf("%d", &pecas[i]);
    }


    for(int count = 1; count <= numero_pecas; count++) {
        int encontrei = 0;
        for(int j = 0; j < numero_pecas - 1; j++) {
            if(pecas[j] == count) {
                encontrei = 1;
                break;
            }
        }
        if(!encontrei) {
            printf("%d", count);
            break;
        }
    }

    return 0;
}
