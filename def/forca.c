#include <stdio.h>
#include <locale.h>

void imprimirItens(int n, int selecionados[], int valores[], int pesos[]) {
    int valorTotal = 0, pesoTotal = 0;
    printf("Itens selecionados: ");
    for (int i = 0; i < n; i++) {
        if (selecionados[i]) {
            printf("Item %d (Valor: %d, Peso: %d) ", i + 1, valores[i], pesos[i]);
            valorTotal += valores[i];
            pesoTotal += pesos[i];
        }
    }
    printf("\nValor total: %d\n", valorTotal);
    printf("Peso total: %d\n", pesoTotal);
}

void mochilaForcaBruta(int capacidade, int valores[], int pesos[], int n) {
    int melhorValor = 0, melhorSelecao[n];
    for (int i = 0; i < (1 << n); i++) {
        int valorAtual = 0, pesoAtual = 0, selecionados[n];

        for (int j = 0; j < n; j++) {
            selecionados[j] = (i >> j) & 1;

            if (selecionados[j]) {
                valorAtual += valores[j];
                pesoAtual += pesos[j];
            }
        }

        if (pesoAtual <= capacidade && valorAtual > melhorValor) {
            melhorValor = valorAtual;
            for (int k = 0; k < n; k++) {
                melhorSelecao[k] = selecionados[k];
            }
        }
    }

    imprimirItens(n, melhorSelecao, valores, pesos);
}

int main(){

    setlocale(LC_ALL, "Portuguese");

     int n, capacidade;

    printf("Digite a capacidade da mochila (em kg): ");
    scanf("%d", &capacidade);

    printf("Digite o número de itens disponíveis: ");
    scanf("%d", &n);

    int valores[n], pesos[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o valor e o peso do item %d (separados por espaço): ", i + 1);
        scanf("%d %d", &valores[i], &pesos[i]);
    }

mochilaForcaBruta(capacidade, valores, pesos, n);

    return 0;
}
