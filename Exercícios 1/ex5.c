#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;
    
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    
    delta = pow(b, 2) - 4 * a * c;
    x1 = (b * -1 + sqrt(delta)) / 2 * a;
    x2 = (b * -1 - sqrt(delta)) / 2 * a;
    
    printf("As raízes da equação %.2fx² + %.2fx + %.2f são:\nRaíz 1: %.2f;\nRaíz 2: %.2f;", a, b, c, x1, x2);
}