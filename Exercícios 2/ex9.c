#include <stdio.h>

int main()
{
    int horas, minutos, segundos;
    
    do {
        printf("Informe a quantidade de segundos: ");
        scanf("%d", &segundos);
        
        if (segundos < 0) {
            printf("ERROR\nInforme uma quantidade positiva de segundos!\n");
        }
    } while (segundos < 0);
    
    minutos = (segundos - segundos % 60) / 60;
    segundos = segundos % 60;
    horas = (minutos - minutos % 60) / 60;
    minutos = minutos % 60;
    
    printf("O valor informado corresponde a %d hora(s), %d minuto(s) e %d segundo(s).", horas, minutos, segundos);
}
