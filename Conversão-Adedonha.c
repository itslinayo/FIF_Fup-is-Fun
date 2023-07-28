#include <stdio.h>

int main() {
    int dedos;
    scanf("%d", &dedos);

    if (dedos == 0) {
        printf("joguem de novo\n");
    } else {
        // Converter a soma dos dedos em uma letra L
        int valor_letra = (dedos - 1) % 26; // O intervalo de letras vai de 0 a 25
        char letra = 'a' + valor_letra; // Convertendo o valor para a letra correspondente
        printf("%c\n", letra);
    }

    return 0;
}
