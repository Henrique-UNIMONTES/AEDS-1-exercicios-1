#include <stdio.h>

int main() {
    int length = 15;
    int idade[length], quant[5] = {0, 0, 0, 0, 0};
    
    for (int i = 0; i < length; i++) {
        printf("Informe a idade da %d° pessoa: ", i + 1);
        scanf("%d", &idade[i]);
    }
    
    for (int i = 0; i < length; i++) {
        int aux = idade[i];
        
        if (aux < 16) quant[0]++;
        
        else if (aux < 31) quant[1]++;
        
        else if (aux < 45) quant[2]++;
        
        else if (aux < 61) quant[3]++;
        
        else quant[4]++;
    }
    
    for (int i = 0; i < 5; i++) {
        printf("\nForam contabilizadas %d pessoa(s) na %d° faixa etária", quant[i], i + 1);
    }
    
    printf("\nNa primeira faixa etária encontram-se %.2f%% das pessoas", (float)(quant[0] * 100) / (float)length);
    printf("\nNa última faixa etária encontram-se %.2f%% das pessoas", (float)(quant[4] * 100) / (float)length);
}