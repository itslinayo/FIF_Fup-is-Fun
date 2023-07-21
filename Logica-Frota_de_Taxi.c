#include <stdio.h>

int main(){
    
    float pLitroAlcool, pLitroGaso, kmLitroAlcool, kmLitroGaso;
    scanf("%f %f %f %f", &pLitroAlcool, &pLitroGaso, &kmLitroAlcool, &kmLitroGaso);
    
    float alcool = pLitroAlcool / kmLitroAlcool;
    float gasolina = pLitroGaso / kmLitroGaso;
    
    if(alcool < gasolina){
        printf("A\n");
    }else{
        printf("G\n");
    }
    
    
    return 0;
}