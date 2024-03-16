#include <stdio.h>

int checkPrimo(int num) {
    int divisores = 0;
    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) divisores ++;
    }
    
    return divisores < 2;
}

int main() {
    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);
    
    printf("%d %s um número primo", num, checkPrimo(num) ? "é" : "não é");
}