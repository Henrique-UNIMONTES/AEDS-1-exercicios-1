#include <stdio.h>

int checkDivBy2Or3(int num) {
    if (num % 2 == 0) return 1;
    if (num % 3 == 0) return 1;
    return 0;
}

int main() {
    int length = 10, quant = 0;
    int num[length];
    
    for (int i = 0; i < length; i++) {
        printf("Informe o %d° número: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < length; i++) {
        quant += checkDivBy2Or3(num[i]);
    }
    
    printf("Foram contabilizados %d número(s) divisíveis por 2 ou por 3", quant);
}