#include <stdio.h>

int main()
{
    int x = 15, y = 5, aux;
    
    printf("Os valores iniciais das variáveis são:\nx: %d;\ny: %d;\n\n", x, y);
    
    aux = x;
    x = y;
    y = aux;
    
    printf("Os valores finais das variáveis são:\nx: %d;\ny: %d;", x, y);
}