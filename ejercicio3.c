#include <stdio.h>

#define N 10

typedef int arreglo[N];

int buscaMenor(arreglo a, int *mayor);

int main()
{
    arreglo a;
    int mayor;
    int posicion;

    for(int i = 0; i < N; i++)
    {
        printf("Arreglo[%d]: ", i);
        scanf("%d", &a[i]);
    }

    posicion = buscaMenor(a, &mayor);

    printf("El numero mayor es: %d \n", mayor);
    printf("En la posicion [%d]", posicion);

    getch();
    return 0;
}

int buscaMenor(arreglo a, int *mayor)
{
    int pos = -1;
    *mayor= a[0];
   
    for(int i = 0; i < N; i++)
    {   

        if(a[i] >= *mayor){
            pos = i;
            *mayor = a[i];
        }
    }

    return pos;
}