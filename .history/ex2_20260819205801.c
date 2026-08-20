#include <stdio.h>
int main() {
    int valor;
    int c;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    c = valor /50;
    if (valor >= 50) {
        printf("%d cedulas de 50 reais\n", c);

    
    }
    return 0;
}