#include <stdio.h>
int main() {
    int valor;
    int c;


    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    c = valor / 50;
    
    if (valor >= 50) {
        printf("%d cedulas de 50 reais\n", c);
    } else {
        printf("Cedulas de 50 reais: 0\n");
    }

    if (c % 50 20) {
        printf("%d cedulas de 20 reais\n", d / 20);
    } else {
        printf("Cedulas de 20 reais: 0\n");
    }

    if (d % 20 >= 10) {
        printf("%d cedulas de 10 reais\n", (d % 20) / 10);
    } else {
        printf("Cedulas de 10 reais: 0\n");
    }

    if (d % 20 % 10 >= 5) {
        printf("%d cedulas de 5 reais\n", (d % 20 % 10) / 5);
    } else {
        printf("Cedulas de 5 reais: 0\n");
    }
    return 0;
}