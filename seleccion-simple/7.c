// 7. Ingresar 4 números enteros e imprimirlos de Menor a Mayor.

#include<stdio.h>

int main() {
    int num, num1, num2, num3, num4;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    printf("Ingrese el cuarto numero: ");
    scanf("%d", &num4);

    if(num1 > num2) {
        num = num1;
        num1 = num2;
        num2 = num;
    }

    if(num1 > num3) {
        num = num1;
        num1 = num3;
        num3 = num;
    }

    if(num1 > num4) {
        num = num1;
        num1 = num4;
        num4 = num;
    }

    if(num2 > num3) {
        num = num2;
        num2 = num3;
        num3 = num;
    }

    if(num2 > num4) {
        num = num2;
        num2 = num4;
        num4 = num;
    }

    if(num3 > num4) {
        num = num3;
        num3 = num4;
        num4 = num;
    }

    printf("Los datos ingresados de menor a mayor son: %d %d %d %d\n", num1, num2, num3, num4);

    return 0;
}