#include <stdio.h>
#include <math.h>

int main(){
    
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    
    float form = 0;
    form = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("%.2f\n", form);
    
    return 0;
}