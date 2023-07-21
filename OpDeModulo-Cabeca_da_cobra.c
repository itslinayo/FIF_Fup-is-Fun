#include <stdio.h>

int main() {
    int dimensaoTabuleiro, posicaoInicialX, posicaoInicialY, segundosDistraido;
    char direcaoInicial;

    scanf("%d %d %d %c %d", &dimensaoTabuleiro, &posicaoInicialX, &posicaoInicialY, &direcaoInicial, &segundosDistraido);

    if (direcaoInicial == 'U') {
        posicaoInicialY = (posicaoInicialY - segundosDistraido) % dimensaoTabuleiro;
        if (posicaoInicialY < 0)
            posicaoInicialY += dimensaoTabuleiro;
    } else if (direcaoInicial == 'D') {
        posicaoInicialY = (posicaoInicialY + segundosDistraido) % dimensaoTabuleiro;
    } else if (direcaoInicial == 'L') {
        posicaoInicialX = (posicaoInicialX - segundosDistraido) % dimensaoTabuleiro;
        if (posicaoInicialX < 0)
            posicaoInicialX += dimensaoTabuleiro;
    } else if (direcaoInicial == 'R') {
        posicaoInicialX = (posicaoInicialX + segundosDistraido) % dimensaoTabuleiro;
    }

    printf("%d %d\n", posicaoInicialX, posicaoInicialY);

    return 0;
}
