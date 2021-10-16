// 3. Dado el radio de una circunferencia informar su perímetro y superficie.

#include<stdio.h>
#define PI 3.1416

int main() {
    int radio;
    float superficie, perimetro;

    printf("Ingrese el radio: ");
    scanf("%d", &radio);

    perimetro = 2 * PI * radio;
    superficie = PI * radio * radio;

    printf("El perimetro es: %f\n", perimetro);
    printf("La superficie es: %f", superficie);
}