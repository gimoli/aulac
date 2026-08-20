#include <stdio.h>
int main() {
    int sb;
    int i1, i2;

    printf("Digite o valor do salario bruto: ");
    scanf("%d", &sb);

    
    i1 = sb - 2000;
    i2 = sb - 4000;

    if (sb <= 2000) {
        printf("Salario insento de imposto.\n");
    } else if (sb >= 2001 && sb <= 4000) {
        printf("15 porcento sobre a parcela que exceder R$ 2.000,00.\n", i1 *15 / 100);
        else {printf("ERRO!.\n");}
    } else if (sb > 4001) {
        printf("22.5 porcento sobre a parcela que exceder R$ 4.000,00 + o imposto fixo da faixa anterior (R$ 300,00).\n", i2 *22.5 / 100 + 300);
    } else {
        printf("ERRO!.\n");
    }

    return 0;
}