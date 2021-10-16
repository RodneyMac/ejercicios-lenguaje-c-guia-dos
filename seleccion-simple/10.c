// 10. Ingresar un Dígito por teclado, del 0 al 10, e imprimirlo en Letras: Si Ingreso 1, imprimir
// “Uno”, si ingreso 2, imprimir “Dos”, y así sucesivamente.

#include<stdio.h>

int main() {
    int num;

    printf("Ingrese un numero del 1 al 10: ");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf("Cero");
        break;
    case 1: 
        printf("Uno");
        break;
    case 2:
        printf("Dos");
        break;
    case 3:
        printf("Tres");
        break;
    case 4:
        printf("Cuatro");
        break;
    case 5:
        printf("Cinco");
        break;
    case 6:
        printf("Seis");
        break;
    case 7:
        printf("Siete");
        break;
    case 8:
        printf("Ocho");
        break;
    case 9:
        printf("Nueve");
        break;
    case 10:
        printf("Diez");
        break;        
    default:
        printf("Numero no correspondido");
        break;
    }
}