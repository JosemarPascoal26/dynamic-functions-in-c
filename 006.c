#include <stdio.h>
#include <string.h>

void inverter(char vet[])
{
    int tam = strlen(vet);

    int i = 0, fim = tam - 1;
    char aux;

    while(i < (tam / 2))
    {
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        i++;
        fim--;    
    }
    
}

int main()
{
    char palavra[35] = {"subi no onibus!"};

    printf("palavra original : %s\n", palavra);
    inverter(palavra);
    printf("palavra invertida : %s", palavra);
    return 0;
}