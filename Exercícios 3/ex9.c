#include <stdio.h>

void calcFibonacci(int limit, int previous1, int previous2) {
    if (limit == 0) {
        printf("\b\b;");
        return;
    }
    
    if (previous2 == 0) {
        printf("1, ");
        calcFibonacci(limit, 0, 1);
    }
    
    else {
        printf("%d, ", previous1 + previous2);
        calcFibonacci(limit - 1, previous2, previous1 + previous2);
    }
}

int main()
{
    int num;
    
    do {
        printf("Informe um número: ");
        scanf("%d", &num);
        if (num < 0) printf("\nERROR!\nO número informado não pode ser menor que 1!\n");
    } while (num < 0);
    
    printf("A sequência de Fibonacci até o %d° elemento é:\n", num);
    calcFibonacci(num, 0, 0);
}
