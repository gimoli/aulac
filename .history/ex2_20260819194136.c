#include <stdio.h>
int main() {
    int valor1;
    int saque;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor1);

    saque = valor1 / 5;
    printf("O valor do saque é: %d\n", saque);

    return 0;
}