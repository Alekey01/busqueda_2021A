#include <stdio.h>

#define N 2
#define M 3

typedef int matriz[N][M];
typedef int arreglo[N];

void buscaMenor(matriz a, arreglo b, arreglo pos);

int main()
{
    matriz a;
    arreglo b;
    arreglo pos;
    int posicion = 0;


    //Llenamos la matriz
    for (int i = 0; i < N; i++)
    {
        for( int j = 0; j < M; j++)
        {
            printf("Dame el valor para [%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\n");
    printf("Matriz\n");

    //Imprimimos la matriz
    for (int i = 0; i < N; i++)
    {
        for( int j = 0; j < M; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    buscaMenor(a, b, pos);

    printf("Valores minimos\n");

    //Imprimimos los valores menores
    for(int i = 0; i < N; i++)
    {
        printf("%d ", b[i]);
    }
    
    printf("\n\n");
    printf("Posiciones\n");

    //Imprimimos la posicion de los menores
    for (int i = 0; i < N; i++)
    {
        printf("[%d][%d] ",posicion, pos[i]);
        posicion++;
    }
    

    getch();
    return 0;
}

void buscaMenor(matriz a, arreglo b, arreglo pos)
{
    
    int menor = a[0][0];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(a[i][j] <= menor)
            {
                menor = a[i][j];
                b[i] = menor;
                pos[i]= j;
            }
        }
    }
}