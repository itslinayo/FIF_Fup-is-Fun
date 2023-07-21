#include <stdio.h>

int main() {
    int B, T;
    scanf("%d", &B);
    scanf("%d", &T);

    int areaTotal = 160 * 70;
    int areaEsquerda = B * 70;
    int areaDireita = (160 - T) * 70;

    if (areaEsquerda == areaTotal / 2 && areaDireita == areaTotal / 2)
        printf("0\n");
    else if (areaEsquerda > areaDireita)
        printf("1\n");
    else if (areaDireita > areaEsquerda)
        printf("2\n");
    else
        printf("0\n");

    return 0;
}
