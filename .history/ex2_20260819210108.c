#include <stdio.h>
int main() {
    int valor;
    int c;
    int d;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    c = valor /50;
    d = valor % 50;
    if (valor >= 50) {
        printf("%d cedulas de 50 reais\n", c);
    } else {
        printf("Erro\n");
    }

    if (d >= 20) {
        printf("%d cedulas de 20 reais\n", d / 20);
    } else {
        printf("Erro\n");
    }

    if (d % 20 >= 10) {
        printf("%d cedulas de 10 reais\n", (d % 20) / 10);
    } else {
        printf("Erro\n");
    }
    return 0;
}