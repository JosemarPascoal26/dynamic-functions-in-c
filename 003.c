#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int tam, *v, i;

    printf("Digite o tamanho do vector: ");
    scanf(" %d", &tam);
    srand(time(NULL));
    v = malloc(tam * sizeof(int));

    if (v)
    {
        printf("MEMORIA ALOCADA COM SUCESSO!\n\n");
        for (i = 0; i < tam; i++)
        {
            *(v+i) = rand() % 100;
        }

        for (i = 0; i < tam; i++)
        {
            printf("%.2d ", *(v+i));
        }
        
    }
    else
    {
        printf("Erro ao alocar memoria!\n");
    }
        
    return 0;
}