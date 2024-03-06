#include <stdio.h>

int main()
{
    int numero;
    
    printf("Informe um número inteiro: ");
    scanf("%d", &numero);
    
    printf("O número digitado foi: %d;\nSeu sucessor é: %d;\nSeu antecessor é: %d;", numero, numero + 1, numero - 1);
}