// 9. Construir un programa que permita ingresar un Nro por teclado y nos diga: Si es 
// positivo, igual que cero o negativo y si es par o impar.

#include<stdio.h>

int main() {
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("El numero es 0\n");
    } else {
        if(num > 0) {
            printf("El numero es positivo\n");
        } else {
            printf("El numero es negativo\n");
        }

        if(num % 2 == 0) {
            printf("El numero es par\n");
        } else {
            printf("El numero es impar\n");
        }
    }
}