#include <stdio.h>

int main(){
    
    //entrada
    int l, d, r; //L o jogador atacante que lança a bola; R o jogador atacante que recebe a bola; e D o último jogador defensor.
    scanf("%d%d%d", &l, &r, &d);
    
    //análise
    if(r > 50 && l < r && r > d){
        printf("S\n"); // impedimento
    }else{
        printf("N\n"); //ñ haverá impedimento
    }
    
    return 0;
}