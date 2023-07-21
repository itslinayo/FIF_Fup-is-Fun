#include <stdio.h>
#include <math.h>

int main(){
    
    int quantCesta, quantBanana, quantGoiaba, quantManga;
    scanf("%d %d %d %d", &quantCesta, &quantBanana, &quantGoiaba, &quantManga);
    
    int quantFrutas = quantBanana + quantGoiaba + quantManga;
    
    int minutos;
    if(quantFrutas <= quantCesta){
        minutos = 1;
    }else{
        minutos = ceil((double) quantFrutas / quantCesta);
    }
    
    printf("%d\n", minutos);
    
    return 0;
}