#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int numero;
    char inverso[4];
    
    printf("Informe um número: ");
    scanf("%d", &numero);
    
    if (numero < 100 || numero > 999) {
        printf("NÃO");
        return 0;
    }
    
    snprintf(inverso, sizeof(inverso), "%d", numero);
    char numero2[4] = {inverso[2], inverso[1], inverso[0]};
    
    printf("O inverso de %d é %s", numero, numero2);
}