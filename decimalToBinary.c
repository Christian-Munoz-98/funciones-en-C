// 1er paso es Dividir el valor entre 2 y almacenar el residuo en un array
// 2do paso DIvidir dividir otra vez entre dos y almacenar el restante
// repetir hasta que nuestro número ya no se pueda dividir

#include <stdio.h>
#include <stdlib.h>

int binaryNumber[12], n, i;

main(){

    system("cls");
    system("color 9F");
    printf("Ingrese un valor decimal\n");
    scanf("%d",&n);
    printf("Usted va a convertir el número %d a binario\n",n);

    for ( i = 0; n > 0; i++)
    {
        binaryNumber[i]=n%2;
        n = n/2;
    }

    printf("El resultado de la conversión es: ");
    for ( i= i-1; i >= 0 ; i--)
    {
        printf("%d",binaryNumber[i]);
    }
    
    

    return 0;
}