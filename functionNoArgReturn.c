#include <stdio.h>
    int a, b;
int add(int a, int b);



int main()
{

    printf("El resultado es: %d",add(100,100));

    return 0;
}

int add(int a, int b){

    int add;

    add = a + b;
    //printf("El resultado es: %d",add);
    return add;
}