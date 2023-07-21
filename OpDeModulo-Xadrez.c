#include <stdio.h>

int main(){
    
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    
    if(linhas % 2 != 0 && colunas % 2 != 0 || linhas % 2 == 0 && colunas % 2 == 0){
        printf("1\n");
    }else{
        printf("0\n");
    }
    
    
    return 0;
}