#include <stdio.h>

int main() {
    int tamanho = 3;
    float num[tamanho];
    
    for (int i = 0; i < tamanho; i++) {
        printf("Informe o %d° número: ", i + 1);
        scanf("%f", &num[i]);
    }
    
    float maiorValor = num[0];
    
    for (int i = 0; i < tamanho; i++) {
        if (maiorValor < num[i]) {
            maiorValor = num[i];
        }
    }
    
    printf("O maior valor informado foi %.2f", maiorValor);
}