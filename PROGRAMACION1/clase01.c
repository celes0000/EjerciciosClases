#include <stdio.h>
#include <stdlib.h>
#define NUM_ITERACION 5


int main()
{
    int numeroUsuario;
    int i;
    int contadorNegativos =0;
    int acumuladorPositivos = 0;
    int acumuladorNegativos =0;

    for (i=0; i<NUM_ITERACION; i++)
    {
        printf("ingrese un numero \n");
        scanf("%d", &numeroUsuario);
        if (numeroUsuario<0){
            contadorNegativos ++;
            acumuladorNegativos+= numeroUsuario;
        } else {
        acumuladorPositivos+=numeroUsuario;
        }
        }
    printf("la cantidad de numeros negativos es %d y la cantidad de negativos es %d", contadorNegativos, NUM_ITERACION - contadorNegativos);
    printf("el promedio de positivos es %d y de negativos es %d", acumuladorNegativos/contadorNegativos);
    return 0;
}
