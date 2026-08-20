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
        printf("ERRO!\n");
    }
    
    //verificar o tipo de triangulo
    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triangulo e equilatero.\n");
    } ellif (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triangulo e isosceles.\n");
    } else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
        printf("O triangulo e escaleno.\n");
    } else {
        printf("ERRO!.\n");
    }

    return 0;
}
