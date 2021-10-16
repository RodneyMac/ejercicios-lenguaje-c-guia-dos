// 1. Ingresar 2 números, si a < b informar a*b , en caso contrario a/b

#include<stdio.h>

int main() {
    int a, b;
    int resultado;

    printf("Ingrese un valor para 'a': ");
    scanf("%d", &a);

    printf("Ingrese valor para 'b': ");
    scanf("%d", &b);

    if(a < b) {
        resultado = a * b;
        printf("a * b: %d\n", resultado);
    } else {
        resultado = a / b;
        printf("a / b: %d\n", resultado);
    }
}