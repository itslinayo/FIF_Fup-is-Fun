#include <stdio.h>

int main(){
    
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    
    int media;
    media = (n1 + n2) / 2;
    
    if(media >= 7){
        printf("aprovado\n");
    }
    else if(media < 4){
        printf("reprovado\n");
    }
    else if(media >= 4 && media <= 7){ //(?)
        int nf, media_f;
        scanf("%d", &nf);
        media_f = (media + nf) / 2;
        if(media_f >= 5){
            printf("aprovado na final\n");
        }
        else{
            printf("reprovado na final\n");
        }
    }
    
    
    return 0;
}