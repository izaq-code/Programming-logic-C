#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void escreverPorExtenso(int numero) {
    const char *mil[] = {"", "mil", "dois mil", "três mil", "quantro mil", "cinco mil", "seis mil", "sete mil", "oito mil", "nove mil"};
    const char *centenas[] = {"", "cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};
    const char *dezenas[] = {"", "dez", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
    const char *unidade[] = {"", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"};

    if (numero == 0) {
        printf("zero\n");
        return;
    }

    if (numero < 0) {
        printf("menos ");
        numero = -numero;
    }

    int m = numero / 1000; // Milhares
    int c = (numero % 1000) / 100; // Centenas
    int d = (numero % 100) / 10; // Dezenas
    int u = numero % 10; // Unidades

    if (m > 0) {
        printf("%s ", mil[m]);
    }

    if (c > 0) {
        printf("%s ", centenas[c]);
    }

    if (d > 0) {
        if (d == 1 && u > 0) {
            const char *especial[] = {"onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
            printf("%s ", especial[u - 1]);
            return;
        }
        printf("%s ", dezenas[d]);
    }

    if (u > 0) {
        printf("%s", unidade[u]);
    }

    printf("\n");
}

int lerPorExtenso(const char *extenso) {
    const char *mil[] = {"mil", "dois mil", "três mil", "quatro mil", "cinco mil", "seis mil", "sete mil", "oito mil", "nove mil"};
    const char *centenas[] = {"cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};
    const char *dezenas[] = {"dez", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
    const char *unidade[] = {"um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};

    int total = 0;
    char *t = strtok((char *)extenso, " ");

    while (t != NULL) {

       for (int i = 0; i < 9; i++) {
            if (strcmp(t, mil[i]) == 0) {
                total += (i + 1) * 1000;
                break;
            }
        }

        for (int i = 0; i < 9; i++) {
            if (strcmp(t, centenas[i]) == 0) {
                total += (i + 1) * 100;
                break;
            }
        }


        for (int i = 0; i < 9; i++) {
            if (strcmp(t, dezenas[i]) == 0) {
                total += (i + 1) * 10;
                break;
            }
        }


        for (int i = 0; i < 19; i++) {
            if (strcmp(t, unidade[i]) == 0) {
                total += (i + 1);
                break;
            }
        }

        t = strtok(NULL, " ");
    }

    return total;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;
    char extenso[100];


    printf("Digite um valor seu valor bancario: entre -9999 a 9999 \n ");
    scanf("%d", &numero);

    if (numero < -9999 || numero > 9999) {
        printf("Por favor, digite um número entre -9999 a 9999\n");
    } else {
        printf("Por extenso: ");
        escreverPorExtenso(numero);
    }


    printf("Digite um número por extenso (ex: cento e vinte e três): ");
    getchar();
    fgets(extenso, sizeof(extenso), stdin);
    extenso[strcspn(extenso, "\n")] = 0;

    int valorNumerico = lerPorExtenso(extenso);
    printf("Valor numérico: %d\n", valorNumerico);

    return 0;
}
