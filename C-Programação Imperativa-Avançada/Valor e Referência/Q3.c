#include <stdio.h>
#include <stdlib.h>

int tempoJogo(int hora1, int minuto1, int hora2, int minuto2, int *periodo) {
    int totalMinutos1 = hora1 * 60 + minuto1;
    int totalMinutos2 = hora2 * 60 + minuto2;
    *periodo = abs(totalMinutos2 - totalMinutos1);
    if (*periodo > 210) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int hora1, minuto1, hora2, minuto2, periodo;

    printf("Digite a hora e os minutos do primeiro horario (formato hh:mm): ");
    scanf("%d:%d", &hora1, &minuto1);

    printf("Digite a hora e os minutos do segundo horario (formato hh:mm): ");
    scanf("%d:%d", &hora2, &minuto2);

    int result = tempoJogo(hora1, minuto1, hora2, minuto2, &periodo);
    printf("O periodo decorrido entre os horarios eh de %d minutos.\n", periodo);
    
    if(result == 1){
        printf("O intervalo de tempo calculado eh maior que 3 horas e meia.\n");
    } else {
        printf("O intervalo de tempo calculado nao eh maior que 3 horas e meia.\n");
    }

    return 0;
}

