#include "TCircularList.h"
#include <stdio.h>

int main(){
    int numeroPessoas, numeroPassadas;
    scanf("%d", &numeroPessoas);
    scanf("%d", &numeroPassadas);
    TCircularList * lista = TCircularList_create();
    for (int i = 1; i <= numeroPessoas; i++)
    {
        TCircularList_insert_end(lista, i);
    }
    
    printf("%d\n", sobreviventeDaMoeda(lista, numeroPassadas));
}