#include <stdio.h>

int calcMMC(int n1, int n2) {
    int maior = n1 > n2 ? n1 : n2;
    int res = maior;
    
    while (1) {
        if (res % n1 == 0 && res % n2 == 0) {
            return res;
        }
        
        res += maior;
    }
}

int main()
{
    int n1, n2;
    
    printf("Informe o primeiro número: ");
    scanf("%d", &n1);
    printf("Informe o segundo número: ");
    scanf("%d", &n2);
    
    printf("MMC(%d, %d) = %d", n1, n2, calcMMC(n1, n2));
}
