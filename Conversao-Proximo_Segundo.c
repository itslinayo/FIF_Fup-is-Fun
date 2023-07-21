#include <stdio.h>

int main(){
    
    int hora, min, seg;
    scanf("%d %d %d", &hora, &min, &seg);
    
    if(seg < 59){
        seg += 1;
    }else{
        seg = 0;
        
        if(min < 59){
            min += 1;
        }else{
            min = 0;
            
            if(hora < 23){
                hora += 1;
            }else{
                hora = 0;
            }
        }
    }
    
    printf("%02d %02d %02d\n", hora, min, seg);
    
    return 0;
}