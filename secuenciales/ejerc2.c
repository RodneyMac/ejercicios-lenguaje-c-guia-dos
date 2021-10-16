// 2. Dadas la base y altura de un rectángulo imprimir su superficie.

#include<stdio.h>

int main() {
    int base, altura, superficie;

    printf("Ingrese la base del rectangulo: ");
    scanf("%d", &base);

    printf("Ingrese la altura del rectangulo: ");
    scanf("%d", &altura);

    superficie = base * altura;

    printf("La superficie del rectangulo es: %d", superficie);
}