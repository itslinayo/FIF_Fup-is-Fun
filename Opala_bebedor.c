#include <stdio.h>

int main(){
    
    float vel, min, lit, desempenho;
    scanf("%f%f%f", &vel, &min, &lit);
    
    min /= 60;
    desempenho = vel * min / lit;
    
    printf("%.2f\n", desempenho);
    return 0;
}