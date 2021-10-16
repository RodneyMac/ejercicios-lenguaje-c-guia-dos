// 4. Ingresar un número e informar si es múltiplo de 7.

#include<stdio.h>

int main() {
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if(num % 7 == 0) {
        printf("Es multiplo de 7: %d", num);
    } else {
        printf("No es multiplo de 7: %d", num);
    }
}