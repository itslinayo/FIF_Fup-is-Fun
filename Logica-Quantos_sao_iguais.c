#include <stdio.h>

int main(){
    
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);
    
    if(x1 != x2 && x1 != x3 && x2 != x3){
        printf("0\n");
    }else if(x1 == x2 && x1 == x3 && x2 == x3){ 
        printf("3\n");
    }else{
        printf("2\n");
    }
    
    return 0;
}