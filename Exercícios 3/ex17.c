#include <stdio.h>

int main() {
    int limiteInferior = 20, limiteSuperior = 100;
    
    printf("------Números divisíveis por 2 e 3 entre %d e %d------\n\n", limiteInferior, limiteSuperior);
    
    for (int i = limiteInferior; i <= limiteSuperior; i++) {
        if (i % 6 == 0) {
            printf("%d, ", i);
        }
    }
    
    printf("\b\b.");
}