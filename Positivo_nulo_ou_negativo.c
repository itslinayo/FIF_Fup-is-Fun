#include <stdio.h>

int main(){
    
    int n1;
    scanf("%d", &n1);
    
    if(n1 > 0){
       printf("positivo\n");
    }
    else if(n1 < 0){
       printf("negativo\n"); 
    }
    else{
        printf("nulo\n");
    }
    
    return 0;
}