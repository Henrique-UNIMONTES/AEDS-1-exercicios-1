//INCOMPLETE

#include <stdio.h>

int calcMDC(int numero1, int numero2) {
    int primo = 2, mdc = 1, n1 = numero1, n2 = numero2;
    
    while (1) {
        if (n1 == 1 && n2 == 1) return mdc;
        
        int divisores = 0;
        
        for (int i = 1; i < primo / 2; i++) {
            if (primo % i == 0) divisores++;  
        }
        
        if (divisores > 2) {
            primo++;
            continue;
        }
        
        if (n1 % primo == 0 && n2 % primo == 0) {
            mdc *= primo;
            n1 /= primo;
            n2 /= primo;
        }
        
        if (n1 % primo == 0) n1 /= primo;
        if (n2 % primo == 0) n2 /= primo;
        primo++;
    }
}

int main()
{
    int n1, n2;
    
    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    
    printf("MDC(%d, %d) = %d", n1, n2, calcMDC(n1, n2));
}
