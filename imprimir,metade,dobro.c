#include <stdio.h>
#include <stdlib.h>

int main() {
    float num, metade, dobro;
    printf("Insira um número: ");
    scanf("%f", &num);
    if (num > 50) {
        metade = num / 2;
        printf("A metade do número é: %f", metade);
    } else {
        dobro = num * 2;
        printf("O dobro do número é: %f", dobro);
    }
    return 0;
}
