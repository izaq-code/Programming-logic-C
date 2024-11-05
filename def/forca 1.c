#include <stdio.h>
#include <locale.h>


void imprimirItens( int quantidade[], int distancia[], int n){
 int quantidadeTotal = 0, distanciaTotal = 0;

for (int y = 0; y < n; y++){

      printf("Item %d (cidade numero: %d, distancia: %d) ", y + 1, quantidade[y], distancia[y]);
     quantidadeTotal += quantidade[y];
    distanciaTotal += distancia[y];


}


}


void viajem(int capacidade, int quantidade[], int distancia[], int n) {
    int melhorDistancia = 0, melhorSelecao[n];

    for(int i = 0; i < (1 << n); i++){
   int quantidadeAtual = 0, distanciaoAtual, selecionados[n];

        for(int j = 0; j < n; j++){

            selecionados[j] = (i >> j) & 1;


            if(selecionados[j]){
                quantidadeAtual += quantidade[j];
                distanciaoAtual += distancia[j];
            }
        }

       for(int k = 0; k < n; i++)

       if(quantidadeAtual > melhorDistancia && distanciaoAtual > distancia){

      melhorSelecao[n] =  selecionados[k];

       }

    }
  imprimirItens(n, quantidade, distancia);
}
int main(){

    setlocale(LC_ALL, "Portuguese");

     int n, capacidade;

    printf("Digite a quantidade de cidades : ");
    scanf("%d", &capacidade);

    printf("Digite a distancia ate elas: ");
    scanf("%d", &n);

    int quantidade[n], distancia[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o a quantidade e a distancia do item %d (separados por espaço): ", i + 1);
        scanf("%d %d", &quantidade[i], &distancia[i]);
    }



    return 0;
}
