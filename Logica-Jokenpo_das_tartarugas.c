#include <stdio.h>

int main(){
    
    char j1, j2;
    scanf(" %c %c", &j1, &j2);
    
    if(j1 == 'R' && j2 == 'R' || j1 == 'P' && j2 == 'P' || j1 == 'S' && j2 == 'S'){
        printf("empate\n");
    }else if(j1 == 'R' && j2 == 'S' || j1 == 'P' && j2 == 'R' || j1 == 'S' && j2 == 'P'){
        printf("jog1\n");
    }else{
        printf("jog2\n");
    }
    
    return 0;
}