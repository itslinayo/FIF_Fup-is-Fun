#include <stdio.h>
#include <math.h>

int main(){
    
    float valorProd, chute1, chute2;
    scanf("%f %f %f", &valorProd, &chute1, &chute2);
    
    float difJog1 = fabs(valorProd - chute1);
    float difJog2 = fabs(valorProd - chute2);
    
    if(difJog1 > difJog2){
        printf("segundo\n");
    }else if(difJog1 < difJog2){
        printf("primeiro\n");
    }else{
        printf("empate\n");
    }
    
    return 0;
}