#include <stdio.h>
int main() {
    int valor;
    int c;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    c = valor /50;
    if (valor >= 50) {
        printf("%d cé", c);
    }
    return 0;
}