#include <stdio.h>

int main(){
    
    float valorTV, juros = 0, valorParc = 0, valorTotal = 0;
    int qParc;
    scanf("%f %d", &valorTV, &qParc);
    

    if(qParc == 1){
        juros = 0;
    }else if(qParc == 2){
        juros = 0.05;
    }else if(qParc == 3){
        juros = 0.1;
    }else if(qParc == 4){
        juros = 0.15;
    }else if(qParc == 5){
        juros = 0.2;
    }else if(qParc == 6){
        juros = 0.25;
    }else if(qParc == 7){
        juros = 0.3;
    }else if(qParc == 8){
        juros = 0.35;
    }else if(qParc == 9){
        juros = 0.4;
    }else if(qParc == 10){
        juros = 0.45;
    }
    
    valorTotal = valorTV * (1 + juros);
    valorParc = valorTotal / qParc;
    
    printf("%.2f\n%.2f\n", valorParc, valorTotal);
    
    return 0;
}