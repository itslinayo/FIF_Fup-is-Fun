#include <stdio.h>
#include <math.h>

int main(){
    
    //chute do primeiro jogador
    float chute1;
    scanf("%f", &chute1);
    
    //chute do segundo jogador
    char chute2;
    scanf(" %c", &chute2);
    
    float valorProd;
    scanf("%f", &valorProd);
    
    if(chute1 == valorProd || chute2 == 'm' && valorProd > chute1 || chute2 == 'M' && valorProd < chute1){
        printf("primeiro\n");
    }else{
        printf("segundo\n");
    }
    
    return 0;
}

/*  .A função srand(time(NULL)) é uma função em C que inicializa o gerador de números aleatórios. Ela faz parte da biblioteca stdlib.h.
    .Vamos analisar a função em detalhes:
    .time(NULL) retorna o tempo atual em segundos desde 1º de janeiro de 1970 (conhecido como Unix Epoch). A função time() requer um argumento do tipo time_t *, que pode ser NULL. Passar NULL significa que estamos interessados apenas no tempo atual.
    .srand() é uma função que inicializa o gerador de números aleatórios. Ela recebe um argumento do tipo unsigned int, que é conhecido como "semente" (seed) do gerador de números aleatórios. A semente é um valor inicial a partir do qual o gerador produzirá uma sequência de números aparentemente aleatórios.
    .Ao utilizar srand(time(NULL)), estamos fornecendo uma semente baseada no tempo atual. Como o tempo está sempre mudando, a semente também muda a cada execução do programa. Isso ajuda a obter sequências de números diferentes a cada vez que o programa é executado.
    .Essa abordagem é comumente usada para obter números aleatórios mais "aleatórios" em programas que envolvem sorteios, jogos ou qualquer situação em que a aleatoriedade seja desejada. A semente baseada no tempo atual ajuda a evitar que a mesma sequência de números seja gerada repetidamente em diferentes execuções do programa.*/
    
    