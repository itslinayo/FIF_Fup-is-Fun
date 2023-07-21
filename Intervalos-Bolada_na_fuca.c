#include <stdio.h>

int main(){
    
    char saque;
    int potencia;
    scanf(" %c %d", &saque, &potencia);
    
    float valorSaque;
    if(saque == 'c'){
        valorSaque = 18;
    }else{
        valorSaque = 20;
    }
    
    float poder = ((potencia * valorSaque) - 80) / 10;
    
    if(poder < 150){
        printf("Fraco, nem passou\n");
    }else if(poder >= 150 && poder < 180){
        printf("Perfeito\n");
    }else if(poder > 180 && poder < 210){
        printf("Satisfeito\n");
    }else if(poder > 210){
        printf("Muito forte, bola fora\n");
    }
    
    return 0;
}