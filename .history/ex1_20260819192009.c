#include <stdio.h>
int main() {
    int lado1, lado2, lado3;

    //pede os valores dos lados do triângulo
    printf("Digite o valor do lado 1: ");
    scanf("%d", &lado1);
    printf("Digite o valor do lado 2: ");  
    scanf("%d", &lado2);
    printf("Digite o valor do lado 3: ");
    scanf("%d", &lado3);

    //verificar se a soma de dois lados é maior que o terceiro lado
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        printf("Os valores digitados formam um triangulo.\n");
    } else {
        printf("Os valores digitados nao formam um triangulo.\n");
    }
     if
    return 0;
}
