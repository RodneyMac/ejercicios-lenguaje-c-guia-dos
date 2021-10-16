// 6. Ingresar dos valores numéricos que corresponden a un horario expresados horas y 
// minutos, convertirlo a minutos. Mostrar el resultado.

#include<stdio.h>

int main() {
    int horas, minutos, resultado;

    printf("Ingrese un numero para indicar las horas: ");
    scanf("%d", &horas);

    printf("Ingrese un numero para indicar los minutos: ");
    scanf("%d", &minutos);

    resultado = (horas * 60) + minutos;

    printf("Minutos: %d", resultado);
}