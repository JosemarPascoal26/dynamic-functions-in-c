#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x;


    
    if(x = malloc(sizeof(int)))
    {
        printf("Memoria alocada com sucesso!\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n",*x);
    }
    else
    {
        printf("Erro ao alocar memoria!\n");
    }
    
    
    return 0;
}