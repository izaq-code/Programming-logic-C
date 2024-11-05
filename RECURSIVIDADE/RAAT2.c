#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

int fatorial(int n){

if (n == 0 || n == 1){

return 1;

}else{

return n * fatorial(n -1);

}

}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int f;

    printf("DIGITE SEU FAT: \n");
    scanf("%d", &f);

    printf("SEU FAT E: %d \n", fatorial(f));

    return 0;
}
