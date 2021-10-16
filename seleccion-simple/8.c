// 8. Lea 3 Números por teclado y descubra si Uno de ellos, es la suma de los otros Dos. Debe
// informarlo por pantalla indicado qué Numero es la suma de los otros dos.

#include <stdio.h>

int main() 
{
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d",&num3);


    if ((num1 + num2) == num3) {
        printf("num1 + num2 = num3 ");
    }
    if ((num1 + num3) == num2) {
        printf("num1 + num3 = num2 ");
    }
    if ((num3 + num2) == num1) {
        printf("num3 + num2 = num1 ");
    }

    return 0;
}