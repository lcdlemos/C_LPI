#include<stdio.h>
main(){
    int i;
    for(i=1; i<=100; i++){
        if(i==60){
            break;
        }
        else{
            if(i%2==1){ /*Se For Impar*/
                continue;
            }
            else{
                printf("%2d\n", i);
            }
        }
    }
    printf("Fim do Laco");
}
