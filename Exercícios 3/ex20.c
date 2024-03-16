#include <stdio.h>

int checkPrimo(int num) {
    if (num == 1 || num == 0) return 0;
    
    int divisores = 0;
    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) divisores ++;
    }
    
    return divisores < 2;
}

int checkDivBy2And3(int num) {
    return num % 6 == 0;
}

int main() {
    int length = 10, quant_primo = 0, quant_div;
    int num[length];
    
    for (int i = 0; i < length; i++) {
        printf("Informe o %d° número: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < length; i++) {
        quant_primo += checkPrimo(num[i]);
        quant_div += checkDivBy2And3(num[i]);
    }
    
    printf("Foram contabilizados %d número(s) primo(s)\ne %d número(s) divisíveis por 2 e 3", quant_primo, quant_div);
}