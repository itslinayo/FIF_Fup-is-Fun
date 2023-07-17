#include <stdio.h>

int main(){
    
    //entrada (dimensões em metro)--------------------------------------------
    int comp1, comp2, larg1, larg2;
    scanf("%d%d", &comp1, &larg1);
    scanf("%d%d", &comp2, &larg2);
    
    //análise--------------------------------------------
    
    /*restrições
        1 ≤ comprimento ≤ 100
        1 ≤ largura ≤ 100*/
    
    
    //calculo das areas
    int area1, area2;
    area1 = comp1 * larg1;
    area2 = comp2 * larg2;
    
    //determinação da melhor area
    int melhor;
    if(area1 > area2){
        melhor = area1;
    }else{
        melhor = area2;
    }
    
    
    //saída --------------------------------------------
    printf("%d\n", melhor);
    
    return 0;
}