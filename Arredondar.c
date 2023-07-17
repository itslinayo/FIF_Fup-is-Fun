#include <stdio.h>
#include <math.h>

int main(){
    
    char op;
    float num;
    scanf("%c %f", &op, &num);
    
    if(op == 'c'){
        num = ceil (num);
    }else if(op == 'r'){
        num = round (num);
    }else if (op == 'f'){
        num = floor (num);
    }
    
    printf("%.0f\n", num);
    
    return 0;
}