#include <stdio.h>

int main()
{
    int length = 10, soma = 0, num;
    
    for (int i = 0; i < length; i++) {
        printf("Informe o %d° número: ", i + 1);
        scanf("%d", &num);
        
        if (num < 40) soma += num;
    }
    
    printf("A soma dos valores menores que 40 é %d", soma);
}
