#include <stdio.h>

void showPrimos() {
    for (int primo = 1; primo <= 100; primo++) {
        if (primo == 1) continue;
        
        int divisores = 0;
        
        for (int i = 1; i < primo / 2; i++) {
            if (primo % i == 0) divisores++;  
        }
        
        if (divisores > 1) {
            continue;
        }
        
        printf("%d, ", primo);
    }
}

int main()
{
    printf("Os número primos de 1 a 100 são:\n");
    
    showPrimos();
    
    printf("\b\b.");
}
