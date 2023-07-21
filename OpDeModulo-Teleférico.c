#include <stdio.h>
#include <math.h>

int main() {
    int capacidadeCabine, totalAlunos;
    scanf("%d %d", &capacidadeCabine, &totalAlunos);
    
    int numViagens = ceil((double)totalAlunos / (capacidadeCabine - 1));
    
    printf("%d\n", numViagens);
    
    return 0;
}
