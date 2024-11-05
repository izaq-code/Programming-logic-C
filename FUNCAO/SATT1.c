#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <math.h>

float temp(float temp_c){

return 1.8*temp_c+32;

}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float c;

printf("fale a temperatura em C \n");

scanf("%f", &c);

printf("sua temperatura em F e:  %.1f \n", temp(c));

    return 0;
}
