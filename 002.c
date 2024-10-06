#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *x;


    
    //if(x = malloc(sizeof(int)))
    x = calloc(1, sizeof (char));
    
    if (x)
    {
        printf("Memoria alocada com sucesso!\n");
        printf("x: %c\n", *x);
        *x = 'H';
        printf("x: %c\n",*x);
    }
    else
    {
        printf("Erro ao alocar memoria!\n");
    }
    
    
    return 0;
}