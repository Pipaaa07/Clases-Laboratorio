#include <stdio.h>
#include <stdlib.h>
// \t = tabular \n = saltear renglon    alt 92 = "\"
// printf %d para mostrar entero
// char* direccion del caracter
// & = direccion (siempre)
int main()
{
    int edad;
    float altura;

    printf("\nIngrese su edad: ");
    scanf("%d",&edad);

    printf("\nIngrese su altura: ");
    scanf("%f",&altura);

    printf("\n    Resultados\n");
    printf("\nLa edad es: %d",edad);
    printf("\nLa altura es: %.1f \n",altura);



















    return 0;
}
