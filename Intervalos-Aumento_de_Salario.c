#include <stdio.h>

int main(){
    
    float salarioAtual;
    scanf("%f", &salarioAtual);
    
    float aumento;
    if(salarioAtual <= 1000){
        aumento = 0.2;
    }else if(salarioAtual > 1000 && salarioAtual <= 1500){
        aumento = 0.15;
    }else if(salarioAtual > 1500 && salarioAtual <= 2000){
        aumento = 0.10;
    }else{
        aumento = 0.05;
    }
    
    float salarioAumento = (salarioAtual*aumento) + salarioAtual;
    printf("%.2f\n", salarioAumento);
    
    return 0;
}