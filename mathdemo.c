#include<stdio.h>
#include<math.h>

int x;
float seno,coseno;


int main()
{
    printf("Ingrese el valor de x: ");
    scanf("%d",&x);
    seno = sin(x);
    coseno = cos(x);
    printf("El valor ingresado es: %d\n",x);
    printf("El valor del seno de x es: %f\n", seno);
    printf("El valor del coseno de x es: %f\n",coseno);
    return 0;
}
