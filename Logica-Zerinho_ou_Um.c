#include <stdio.h>

int main(){
    
    int j1, j2, j3;
    scanf("%d %d %d", &j1, &j2, &j3);
    
    if(j1 == j2 && j2 == j3){
        printf("empate\n");
    }else if(j1 == j2){
        printf("jog3\n");
    }else if(j1 == j3){
        printf("jog2\n");
    }else{
        printf("jog1\n");
    }
    
    return 0;
}