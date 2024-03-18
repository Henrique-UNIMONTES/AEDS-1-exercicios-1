#include <stdio.h>

int verifyDate(int d, int m, int a) {
    if (m < 1 || m > 12) return 0;
    
    if (a < 0) return 0;
    
    if (d > 31 || d < 1) return 0;
    
    switch (m) {
        case 2:
            if (a % 4 == 0) {
                if (d > 29) return 0;
            }
            
            else if (d > 28) return 0;
            
            break;
            
        case 4:
            if (d > 30) return 0;
            
            break;
            
        case 6:
            if (d > 30) return 0;
            
            break;
            
        case 9:
            if (d > 30) return 0;
            
            break;
            
        case 11:
            if (d > 30) return 0;
            
            break;
    }
    
    return 1;
}

int main() {
    int dia, mes, ano;
    
    printf("Informe um dia: ");
    scanf("%d", &dia);
    
    printf("Informe um mês (1 a 12): ");
    scanf("%d", &mes);
    
    printf("Informe um ano: ");
    scanf("%d", &ano);
    
    printf(verifyDate(dia, mes, ano) == 1 ? "Data válida" : "Data inválida");
}