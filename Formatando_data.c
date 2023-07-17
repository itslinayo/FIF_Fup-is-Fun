#include <stdio.h>

int main(){
    
    int hora, min, dia, mes, ano;
    scanf("%d%d%d%d%d", &hora, &min, &dia, &mes, &ano);
    
    printf("%02d:%02d %02d/%02d/%02d\n", hora, min, dia, mes, ano%100);
    
    return 0;
}