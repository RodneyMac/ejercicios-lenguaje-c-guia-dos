// 4. Ingresar tres números, informar su suma y producto.

#include<stdio.h>

 int main() {
     int num1, num2, num3, suma, producto;

     printf("Ingrese el primer numero: ");
     scanf("%d", &num1);

     printf("Ingrese el segundo numero: ");
     scanf("%d", &num2);

     printf("Ingrese el tercer numero: ");
     scanf("%d", &num3);

     suma = num1 + num2 + num3;
     producto = num1 * num2 * num3;

     printf("La suma de %d: \n", suma);
     printf("El producto es %d: ", producto);
 }