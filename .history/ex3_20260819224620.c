#include <stdio.h>
int main() {
    int sb;

    printf("Digite o valor do salario bruto: ");
    scanf("%d", &sb);

    if (sb <= 2000) {
        printf("Salario insento de imposto.\n");
    } else (sb >= 2001 && sb <= 4000) {
        printf("O valor do imposto a ser pago e de 10porcento.\n");
    }