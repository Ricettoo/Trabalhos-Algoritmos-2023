#include <stdlib.h>
#include <stdio.h>

int main() {
    double salario, ajuste;
    printf("Insira o salario:");
    scanf("%lf", &salario);
    if (salario <= 400.00) {
        ajuste = salario * 0.15;
        salario = salario + ajuste;
        printf("O novo salario sera de %.2f com 15%% de aumento\n", salario);
    } else if (salario >= 400.01 && salario <= 800.00) {
        ajuste = salario * 0.12;
        salario = salario + ajuste;
        printf("O novo salario sera de %.2f com 12%% de aumento\n", salario);
    } else if (salario >= 800.01 && salario <= 1200.00) {
        ajuste = salario * 0.10;
        salario = salario + ajuste;
        printf("O novo salario sera de %.2f com 10%% de aumento\n", salario);
    } else if (salario >= 1200.01 && salario <= 2000.00) {
        ajuste = salario * 0.07;
        salario = salario + ajuste;
        printf("O novo salario sera de %.2f com 7%% de aumento\n", salario);
    } else if (salario >= 2000.00) {
        ajuste = salario * 0.04;
        salario = salario + ajuste;
        printf("O novo salario sera de %.2f com 4%% de aumento\n", salario);
    } else {
        printf("Ocorreu um erro");
    }
   printf("valor do ajuste:%.2f",ajuste);
    return 0;
}
