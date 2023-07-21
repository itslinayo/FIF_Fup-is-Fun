#include <stdio.h>

int main(){
    
    int ang;
    scanf("%d", &ang);

    int result;
    if(ang >= 0){
        result = ang % 360;
    }else{
        result = (360 - (-ang % 360)) % 360;
    }

    printf("%d\n", result);

    return 0;
}
