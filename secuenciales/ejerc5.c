// 5. Ingresar tres números, informar su promedio.

#include<stdio.h>

int main() {
    int num1, num2, num3;
    float promedio;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    promedio = (num1 + num2 + num3) / 3 ;

    printf("El promedio es: %f", promedio);
}