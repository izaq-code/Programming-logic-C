#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void somatorio(int i, int n){

int soma[n];

while(i <= n){

    soma[i] = i*i;

    printf(" %d", soma[i]);

    i++;
}

}

void()


int main() {
    setlocale(LC_ALL, "Portuguese");


somatorio(1, 10);


    return 0;
}
