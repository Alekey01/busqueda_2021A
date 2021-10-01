#include <stdio.h>

#define N 10

typedef int arreglo[N];

int buscaMenor(arreglo a, int *menor);

int main()
{
    arreglo a;
    int menor;
    int posicion;

    for(int i = 0; i < N; i++)
    {
        printf("Arreglo[%d]: ", i);
        scanf("%d", &a[i]);
    }

    posicion = buscaMenor(a, &menor);

    printf("El numero menor es: %d \n", menor);
    printf("En la posicion [%d]", posicion);

    getch();
    return 0;
}

int buscaMenor(arreglo a, int *menor)
{
    int pos = -1;
    *menor= a[0];
   
    for(int i = 0; i < N; i++)
    {   

        if(a[i] <= *menor){
            pos = i;
            *menor = a[i];
        }
    }

    return pos;
}