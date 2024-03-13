#include <stdio.h>

int main()
{
    int length = 3, menor, maior;
    int num[length];
    
    for (int i = 0; i < length; i++) {
        printf("Informe o %d° valor: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    menor = num[0];
    maior = num[0];
    
    for (int i = 0; i < length; i++) {
        if (maior < num[i]) maior = num[i];
        if (menor > num[i]) menor = num[i];
    }
    
    printf("O maior valor digitado foi: %d\nO menor valor digitado foi: %d", maior, menor);
}
