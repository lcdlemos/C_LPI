#include <stdio.h>
main(){
    char op;
    int num1, num2,verificador=1,resultado=0;
    /*
    A variável verificador, servirá para checar se a divisão foi realizada.
    note que a mesma é iniciada com 1 e, só será alterada se a divisão no for feita.
    */
    printf("DIGITE A EXPRESSAO A SER CALCULADA ");
    scanf("%d %c %d",&num1,&op,&num2);
    switch(op){
        case '+':
            resultado = num1+num2;
            break;
        case '-':
            resultado = num1-num2;
            break;
        case '*':
        case 'x':
        case 'X':
            resultado = num1*num2;
            break;
        case ':':
        case '/':
        case '\\':
            if(num1!=0 &&num2!=0){
            //divisão inteira
                resultado = num1/num2;
                break;
            }else{
                verificador=0;
            }
        default:
            printf("OPCAO INVALIDA\n");
    }
    //o resultado será apresentado enquanto a variável verificador for igual 1.
    if(verificador){
        printf("%d %c %d = %d",num1, op, num2, resultado);
    }

}
