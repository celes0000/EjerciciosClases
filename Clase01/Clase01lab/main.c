#include <stdio.h>
#include <stdlib.h>
#define NUM_ITERACION 5

int main()
{
    int numeroUsuario;
    int i;
    int acumulador= 0;
    int contador = 0;
    int max;
    int min;
    float promedio;
    for (i=0; i< NUM_ITERACION; i++) {
        printf("ingrese un número: \n");
        scanf ("%d", &numeroUsuario);
        contador ++;
        acumulador += numeroUsuario;
        if (numeroUsuario == 0) {
            max = numeroUsuario;
            min = numeroUsuario;
        }
        if (numeroUsuario> max)
        {
            max = numeroUsuario;
        }
        if (numeroUsuario< min)
        {
            min = numeroUsuario;
        }
promedio = acumulador/contador;
}
printf("el promedio es %f ", promedio );
printf("el maximo es %d ", max);
printf("el minimo es %d ", min);

return 0;
}

