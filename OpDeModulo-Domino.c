#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    double result = ((n+1)*(n+2))/2;
    
    printf("%.0lf\n", result);
    
    return 0;
}