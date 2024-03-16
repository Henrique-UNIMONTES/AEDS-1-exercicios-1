#include <stdio.h>
#include <time.h>

typedef struct empregado {
    int codigo, idade, anosTrabalho;
    char dataNasc[11], dataAdmissao[11];
} Empregado;


struct tm getCurrentTime() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    return tm;
}

int calcYears(char * data) {
    int d = (data[0] - '0') * 10 + (data[1] - '0');
    int m = (data[3] - '0') * 10 + (data[4] - '0');
    int a = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0');
    struct tm currentTime = getCurrentTime();
    int idade = 0;
    
    idade = currentTime.tm_year + 1900 - a;
    
    if (m > currentTime.tm_mon && d > currentTime.tm_mday) idade--;
    
    return idade;
}

int verifySituation(Empregado e) {
    if (e.idade >= 65) return 1;
    if (e.anosTrabalho >= 30) return 1;
    if (e.idade >= 60 && e.anosTrabalho >= 25) return 1;
    
    return 0;
}

int main() {
    Empregado e;
    
    printf("Informe o código do empregado: ");
    scanf("%d", &e.codigo);
    
    printf("Informe a data de nascimento do empregado (DD/MM/YYYY): ");
    scanf("%10s", e.dataNasc);
    
    printf("Informe a data de admissão do empregado (DD/MM/YYYY): ");
    scanf("%10s", e.dataAdmissao);
    
    e.idade = calcYears(e.dataNasc);
    e.anosTrabalho = calcYears(e.dataAdmissao);
    
    printf("\n\nCódigo: %d\nIdade: %d anos\nTempo de trabalho: %d anos\nDeve requerer aposentadoria? %s", e.codigo, e.idade, e.anosTrabalho, verifySituation(e) ? "Sim" : "Não");
}