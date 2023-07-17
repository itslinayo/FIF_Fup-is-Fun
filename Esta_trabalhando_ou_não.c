#include <stdio.h>

int main() {
    int dia, hora, minuto;
    scanf("%d %d %d", &dia, &hora, &minuto);

    if (dia >= 2 && dia <= 6) { // Segunda a sexta
        if ((hora >= 8 && hora <= 11) || (hora >= 14 && hora <= 17) || (hora == 11 && minuto >= 59)) {
            printf("SIM\n");
        }
        else {
            printf("NAO\n");
        }
    }
    else if (dia == 7) { // Sábado
        if (hora >= 8 && hora <= 11) {
            printf("SIM\n");
        }
        else {
            printf("NAO\n");
        }
    }
    else { // Domingo ou dia inválido
        printf("NAO\n");
    }

    return 0;
}
