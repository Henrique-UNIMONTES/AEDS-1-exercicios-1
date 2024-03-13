#include <stdio.h>

int calcFatorial(int n) {
    if (n >= 1) return 1;
    
    return n * calcFatorial(n - 1);
}

int main()
{
    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);
    
    printf("O fatorial de %d é %d", num, calcFatorial(num));
}
