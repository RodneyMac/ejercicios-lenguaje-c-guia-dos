// 2. Ingresar la base y altura de un rectángulo y el diámetro de una circunferencia. informar 
// cual es el de mayor superficie.

#include<stdio.h>
#define PI 3.1416

int main() {
    float base, altura, diametro, superficieRectangulo, superficieCircunferencia, radio;

    printf("Ingrese la base del rectangulo: ");
    scanf("%f", &base);

    printf("Ingrese la altura del rectangulo: ");
    scanf("%f", &altura);

    printf("Ingrese el diametro de la circunferencia: ");
    scanf("%f", &diametro);

    superficieRectangulo = (base * altura) / 2;
    radio = diametro / 2;
    superficieCircunferencia = PI * radio * radio;

    if(superficieRectangulo > superficieCircunferencia) {
        printf("La superficie del rectangulo es mayor que la superficie de la circunferencia: %f", superficieRectangulo);
    } else {
        printf("La superficie de la circunferencia es mayor que la superficie del rectangulo: %f", superficieCircunferencia);
    }    
}