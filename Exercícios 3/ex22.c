#include <stdio.h>

int checkPrimo(int num) {
    if (num == 1 || num == 0) return 0;
    
    int divisores = 0;
    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) divisores ++;
    }
    
    return divisores < 2;
}

int checkDivBy3(int num) {
    return num % 3 == 0;
}

int checkDivBy2(int num) {
    return num % 2 == 0;
}

int main() {
    int length = 10, quant_div2 = 0, quant_div3 = 0, quant_primo = 0;
    int num[length];
    
    for (int i = 0; i < length; i++) {
        printf("Informe o %d° número: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < length; i++) {
        quant_div2 += checkDivBy2(num[i]);
        quant_div3 += checkDivBy3(num[i]);
        quant_primo += checkPrimo(num[i]);
    }
    
    printf("Foram contabilizados %d número(s) divisíveis por 2\n%d número(s) divisíveis por 3\nE %d número(s) primos", quant_div2, quant_div3, quant_primo);
}