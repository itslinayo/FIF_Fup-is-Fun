#include <stdio.h>
#include <math.h>

int main(){
    
    float l1, l2, l3, area, P;
    scanf("%f%f%f", &l1, &l2, &l3);
    
    P = (l1 + l2 + l3) / 2;
    area = sqrt(P * (P - l1) * (P - l2) * (P - l3));
    
    printf("%.2f\n", area);
    
    return 0;
}