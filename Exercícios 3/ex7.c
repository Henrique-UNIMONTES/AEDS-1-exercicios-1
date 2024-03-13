#include <stdio.h>

int main()
{
    int length = 100;
    float menor, maior, atual;
    
    for (int i = 0; i < length; i++) {
        printf("Informe o %d° valor: ", i + 1);
        scanf("%f", &atual);
        
        if (i == 0) {
            menor = atual;
            maior = atual;
            continue;
        }
        
        if (menor > atual) menor = atual;
        if (maior < atual) maior = atual;
    }
    
    printf("O maior valor digitado foi %.2f\nO menor valor digitado foi %.2f", maior, menor);
}
