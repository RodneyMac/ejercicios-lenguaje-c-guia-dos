// 3. Ingresar un número y determinar si pertenece al intervalo -2 < x < 4

#include<stdio.h>

int main() {
    float num;

    printf("Ingrese un numero: ");
    scanf("%f", &num);

    if((-2 < num) && (num < 4)) {
        printf("El numero pertenece al intervalo -2 < x < 4");
    } else {
        printf("El numero no pertenece al intervalo -2 < x < 4");
    }
}