#include <stdio.h>

int main(){
    
    int n1, n2;
    char x;
    scanf("%d %d %c", &n1, &n2, &x);
    
    if(x == '+'){
        printf("%d\n", n1 + n2);
    }else if(x == '-'){
        printf("%d\n", n1 - n2);
    }else if(x == '*'){
        printf("%d\n", n1 * n2);
    }else{
        printf("%d\n", n1 / n2);
    }
    
    return 0;
}