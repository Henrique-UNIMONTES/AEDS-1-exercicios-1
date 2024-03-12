#include <stdio.h>

int main() {
    int mes;
    
    printf("Informe um mês (1 a 12): ");
    scanf("%d", &mes);
    
    switch (mes) {
        case 1:
            printf("\nVocê informou janeiro");
            break;
            
        case 2:
            printf("\nVocê informou fevereiro");
            break;
            
        case 3:
            printf("\nVocê informou março");
            break;
            
        case 4:
            printf("\nVocê informou abril");
            break;
            
        case 5:
            printf("\nVocê informou maio");
            break;
            
        case 6:
            printf("\nVocê informou junho");
            break;
            
        case 7:
            printf("\nVocê informou julho");
            break;
            
        case 8:
            printf("\nVocê informou agosto");
            break;
            
        case 9:
            printf("\nVocê informou setembro");
            break;
            
        case 10:
            printf("\nVocê informou outubro");
            break;
            
        case 11:
            printf("\nVocê informou novembro");
            break;
            
        case 12:
            printf("\nVocê informou dezembro");
            break;
            
        default:
            printf("Mês inválido");
            break;
    }
}