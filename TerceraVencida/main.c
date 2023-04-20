#include <stdio.h>
#include <stdlib.h>


int cargarArreglo (char arreglo[], int dimension, char confirm);

int main()
{
    int dimension = 0, i, validos;
    char dado, confirm = 's';
    char arreglo[dimension];

    printf("Ingrese la cantidad de datos a cargar \n");
    scanf("%i", &dimension);

    i = cargarArreglo(arreglo, dimension, confirm);

    for(i=0; i<dimension; i++){
        printf("- %c -", arreglo[i]);
    }

    printf("Ingrese el valor a cargar \n");
    fflush(stdin);
    scanf("%c", &dado);

    insertar(arreglo, validos, dado);

    for(i=0; i<dimension; i++){
        printf("- %c -", arreglo[i]);
    }
    return 0;
}

int cargarArreglo (char arreglo[], int dimension, char confirm)
{
    int i = 0;
    while(confirm == 's' && dimension>i)
    {
        printf("Ingresa el valor a cargar");
        fflush(stdin);
        scanf("%c", &arreglo[i]);

        printf("Quiere seguir cargando? ");
        fflush(stdin);
        scanf("%c", &confirm);
        i++;
    }
    return i;
}

void insertar(int arreglo[ ], int validos, char dado){
    int i= validos; //ultima pos valida izq
    while (i >= 0 && dado < arreglo[i]){
        arreglo[i+1] = arreglo[i];
        i--;
    }
    arreglo[i+1] = dado;
}


