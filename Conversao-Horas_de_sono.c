#include <stdio.h>
#include <stdlib.h>

int main() {
    int hAtual, mAtual, sAtual, hDesp, mDesp, sDesp;
    scanf("%d %d %d %d %d %d", &hAtual, &mAtual, &sAtual, &hDesp, &mDesp, &sDesp);

    // Verifica se o horário de acordar é menor ou igual ao horário de dormir
    if (hDesp <= hAtual || (hDesp == hAtual && mDesp <= mAtual) || (hDesp == hAtual && mDesp == mAtual && sDesp <= sAtual)) {
        hDesp += 24; // Adiciona 24 horas ao horário de acordar para considerar o próximo dia
    }

    int totalSegundosAtual = hAtual * 3600 + mAtual * 60 + sAtual;
    int totalSegundosDesp = hDesp * 3600 + mDesp * 60 + sDesp;
    int totalSegundosSono = totalSegundosDesp - totalSegundosAtual;

    int hSono = totalSegundosSono / 3600;
    int resto = totalSegundosSono % 3600;
    int mSono = resto / 60;
    int sSono = resto % 60;

    printf("%02d %02d %02d\n", hSono, mSono, sSono);

    return 0;
}
