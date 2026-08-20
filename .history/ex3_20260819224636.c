#include <stdio.h>
int main() {
    int sb;

    printf("Digite o valor do salario bruto: ");
    scanf("%d", &sb);

    if (sb <= 2000) {
        printf("Salario insento de imposto.\n");
    } else (sb >= 2001 && sb <= 4000) {
        printf("O valor do imposto a ser pago e de 10porcento.\n");
    } else (sb >= 4001 && sb <= 6000) {
        printf("O valor do imposto a ser pago e de 15porcento.\n");
    } else if (sb >= 6001) {
        printf("O valor do imposto a ser pago e de 20porcento.\n");
    } else {
        printf("ERRO!.\n");
    }