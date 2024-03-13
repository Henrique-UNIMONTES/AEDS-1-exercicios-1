#include <stdio.h>

int main()
{
    int length = 3, minutosTotal = 0, horasTotal = 0;
    int horas[length], minutos[length];
    
    for (int i = 0; i < length; i++) {
        printf("Informe a %d° hora:\nHoras (hh): ", i + 1);
        scanf("%d", &horas[i]);
        printf("Minutos (mm): ");
        scanf("%d", &minutos[i]);
        printf("\n");
    }
    
    for (int i = 0; i < length; i++) {
        minutosTotal += minutos[i];
        horasTotal += horas[i];
    }
    
    if (minutosTotal > 59) {
        horasTotal += (minutosTotal - minutosTotal % 60) / 60;
        minutosTotal = minutosTotal % 60;
    }
    
    printf("A soma das horas fornecidas é %d horas e %d minutos.", horasTotal, minutosTotal);
}