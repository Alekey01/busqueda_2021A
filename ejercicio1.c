#include <stdio.h>

#define N 10

typedef int arreglo[N];

int buscaValor(arreglo a,int n);

int main()
{
    arreglo a;
    int numero;
    int posicion;

    for (int i = 0; i < N; i++)
    {
        printf("Arreglo[%d]: ", i);
        scanf("%d", &a[i]);

    }
    printf("Dame el numero a buscar: ");
    scanf("%d", &numero);

    posicion = buscaValor(a, numero);

        if(posicion != -1)
            printf("el numero esta en la posicion [%d]", posicion);
        else
            printf("El numero no existe");

    getch();
    return 0;
}

int buscaValor(arreglo a,int n)
{
    int pos = -1;

    for (int i = 0; i < N && pos == -1; i++)
    {
        if(a[i] == n)
            pos = i;

    }
    
    
    return pos;
}