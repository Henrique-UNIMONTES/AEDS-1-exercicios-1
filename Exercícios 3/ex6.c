#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2;
    
    printf("Informe o primeiro número: ");
    scanf("%f", &num1);
    
    do {
        printf("\nInforme o segundo número: ");
        scanf("%f", &num2);
        
        if (num2 < num1) {
            printf("\nERROR!\nO segundo número deve ser maior que o primeiro!\n");
        }
    } while (num1 > num2);
    
    if (ceil(num1) != num1) num1 = ceil(num1);
    if (floor(num2) != num2) num2 = floor(num2);
    
    for (int i = num1; i <= num2; i++) {
        printf("\n%d", i);
    }
}
