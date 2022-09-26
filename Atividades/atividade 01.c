#include <stdio.h>

main(){
    int op;                                     /*Declaracao das variaveis utilizadas no programa principal*/

    do{
        printf(" Menu de operacoes com matrizes:\n\n");   /*Exibiçao do menu das operacoes*/
        printf(" 1 : Soma e Subtracao de Matrizes\n");
        printf(" 2 : Multiplicacao de Matrizes\n");
        printf(" 3 : Produto de Matriz por Escalar\n");
        printf(" 4 : Calculo do Determinante de Matriz\n");
        printf(" 5 : Sair do Programa\n\n");

        printf(" Informe o numero da operacao desejada: ");
        scanf("%d", &op);                                               /*Captura do valor da operaçao desejada pelo usuario*/

        system("cls");

        switch(op){                                                     /*Escolhe o menu de acordo com o valor informado para op*/
        case 1  : printf("\n ----------------------------");
                  printf("\n Soma e Subtracao de Matrizes");
                  printf("\n ----------------------------\n\n");
                  dimensao_matriz(op);
                  break;

        case 2  : printf("\n -------------------------");
                  printf("\n Multiplicacao de Matrizes");
                  printf("\n -------------------------\n\n");
                  dimensao_matriz(op);
                  break;

        case 3  : printf("\n -----------------------------");
                  printf("\n Produto de Matriz por Escalar");
                  printf("\n -----------------------------\n\n");
                  dimensao_matriz(op);
                  break;

        case 4  : printf("\n ---------------------------------");
                  printf("\n Calculo do Determinante de Matriz");
                  printf("\n ---------------------------------\n\n");
                  dimensao_matriz(op);
                  break;

        case 5  : printf("\n ---------------");
                  printf("\n Fim do Programa");
                  printf("\n ---------------\n\n");
                  break;

        default : printf("\n -----------------------------------------");
                  printf("\n Opcao Invalida! Escolha uma opcao correta");
                  printf("\n -----------------------------------------\n\n");
        }
    }while(op==0 || op>5);                                             /*Testa se a operacao escolhida foi a correta*/
}

void dimensao_matriz(int oper){
    int lina, cola, linb=0, colb=0, estado;

    if(oper==1 || oper==2){
        do{
            printf("\n Informe as dimensoes das matrizes A e B:\n");
            printf("\n Linha da matriz A:  ");
            scanf("%d", &lina);
            printf(" Coluna da matriz A: ");
            scanf("%d", &cola);
            printf("\n Linha da matriz B:  ");
            scanf("%d", &linb);
            printf(" Coluna da matriz B: ");
            scanf("%d", &colb);
            printf("\n\n Matrizes: A(%dx%d) e B(%dx%d)\n\n", lina,cola,linb,colb);

            if(oper==1){                        /*Se for soma, testa se as matrizes possuem mesma dimensao*/
                if(lina==linb && cola==colb){
                    estado=1;
            }
                else{
                    estado=0;
                    printf("\n ***** Erro! As matrizes A e B devem possuir as mesmas dimensoes. *****\n\n");
                }
            }
            else{                                   /*Se for multiplicacacao, testa se a coluna de A e linha de B sao iguais*/
                if(cola==linb){
                    estado=1;
            }
                else{
                    estado=0;
                    printf("\n ***** Erro! A coluna de A deve ter o mesmo valor da linha de B. *****\n\n");
                }
            }
        }while(estado==0); /*Enquanto a condicao para operaca nao for satisfeita, o programa repete o dimensionamento*/
    }
    else if(oper==3){                                       /*Para multiplicar pelo escalar so precisa de uma matriz M*/
        printf("\n Informe as dimensoes da matriz M:\n");
        printf("\n Linha da matriz M:  ");
        scanf("%d", &lina);
        printf(" Coluna da matriz M: ");
        scanf("%d", &cola);
        printf("\n\n Matriz M(%dx%d)\n\n", lina,cola);
    }
    else{                                                   /*Apenas uma matriz M quadrada para se calcular o determinante*/
        printf("\n Informe a ordem da matriz M:\n");
        printf("\n Ordem da matriz M:  ");
        scanf("%d", &lina);
        cola = lina;
        printf("\n\n Matriz M(%dx%d)\n\n", lina,cola);
    }

    constroi_matriz(oper, lina, cola, linb, colb); /*Chama a funcao para o usuario construir a matriz*/
}

void constroi_matriz(int operacao, int linh_a, int colun_a, int linh_b, int colun_b){
    int i, j, matriza[linh_a][colun_a], matrizb[linh_b][colun_b];

    if(operacao==1 || operacao==2){
        printf("\n Informe os elementos da matriz A:\n\n"); /*Construcao da matriz A*/
        for(i=0;i<linh_a;i++){
            for(j=0;j<colun_a;j++){
                printf(" a%d%d = ", i+1,j+1);
                scanf("%d", &matriza[i][j]);
            }
        }

        printf("\n Informe os elementos da matriz B:\n\n"); /*Construcao da matriz B*/
        for(i=0;i<linh_b;i++){
            for(j=0;j<colun_b;j++){
                printf(" b%d%d = ", i+1,j+1);
                scanf("%d", &matrizb[i][j]);
            }
        }

        printf("\n\n A =\n\n");                              /*Exibicao da matriz A*/
        for(i=0;i<linh_a;i++){
            for(j=0;j<colun_a;j++){
                printf(" %3d", matriza[i][j]);
            }
            printf("\n");
        }

        printf("\n\n B =\n\n");                              /*Exibicao da matriz B*/
        for(i=0;i<linh_b;i++){
            for(j=0;j<colun_b;j++){
                printf(" %3d", matrizb[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("\n Informe os elementos da matriz M:\n\n"); /*Construcao da unica matriz M multiplicar pelo escalar ou calcular o determinante*/
        for(i=0;i<linh_a;i++){
            for(j=0;j<colun_a;j++){
                printf(" m%d%d = ", i+1,j+1);
                scanf("%d", &matriza[i][j]);
            }
        }

        printf("\n\n M =\n\n");                              /*Exibicao da matriz M*/
        for(i=0;i<linh_a;i++){
            for(j=0;j<colun_a;j++){
                printf(" %3d", matriza[i][j]);
            }
            printf("\n");
        }
    }

    operacao_matrizes(operacao, linh_a, colun_a, linh_b, colun_b, matriza, matrizb); /*Chama a funcao de selecao de operacao*/

}

void operacao_matrizes(int sel_oper, int lin_A, int col_A, int lin_B, int col_B, int mat_A[lin_A][col_A], int mat_B[lin_B][col_B]){
    switch(sel_oper){
        case 1 :    soma_subtrai_matrizes(lin_A, col_A, mat_A, mat_B);
                    break;
        case 2 :    multiplica_matrizes(lin_A, col_A, lin_B, col_B, mat_A, mat_B);
                    break;
        case 3 :    multiplica_escalar(lin_A, col_A, mat_A);
                    break;
        case 4 :    determinante(lin_A, col_A, mat_A);
                    break;
    }
}

/*Funcoes para os calculos das operacoes sobre as matrizes*/

void soma_subtrai_matrizes(int linha_A, int coluna_A, int matriz_A[linha_A][coluna_A], int matriz_B[linha_A][coluna_A]){
    int i, j;

    printf("\n\nA+B =\n\n");                              /*Soma das matrizes A e B*/
    for(i=0;i<linha_A;i++){
            for(j=0;j<coluna_A;j++){
                printf(" %3d", matriz_A[i][j]+matriz_B[i][j]);
            }
            printf("\n");
    }

    printf("\n\nA-B =\n\n");                              /*Subtracao das matrizes A e B*/
    for(i=0;i<linha_A;i++){
            for(j=0;j<coluna_A;j++){
                printf(" %3d", matriz_A[i][j]-matriz_B[i][j]);
            }
            printf("\n");
    }
}

void multiplica_matrizes(int linha_A, int coluna_A, int linha_B, int coluna_B, int matriz_A[linha_A][coluna_A], int matriz_B[linha_B][coluna_B]){
    int i, j, k, resultado;

    printf("\n\n AxB =\n\n");                              /*Multiplicacao da matriz A pela matriz B*/
    for(i=0;i<linha_A;i++){
            for(j=0;j<coluna_B;j++){
                resultado=0;                              /*Zera o valor do elemento para a proxima iteracao*/
                for(k=0;k<coluna_A;k++){
                    resultado = resultado + matriz_A[i][k]*matriz_B[k][j]; /*Calcula o produto de aij por bji e linha i por coluna j*/
                }
                printf(" %3d", resultado);
            }
            printf("\n");
    }
}

void multiplica_escalar(int linha_A, int coluna_A, int matriz_A[linha_A][coluna_A]){
    int escalar, i, j;

    printf("\n Informe um numero inteiro escalar para multiplicar a matriz M: ");
    scanf("%d", &escalar);

    printf("\n\n %dM =\n\n", escalar);                              /*Multiplicacao de M por um escalar*/
    for(i=0;i<linha_A;i++){
            for(j=0;j<coluna_A;j++){
                printf(" %3d", escalar*matriz_A[i][j]);
            }
            printf("\n");
    }
}

void determinante(int linha_A, int coluna_A, int matriz_A[linha_A][coluna_A]){
    int det_A;

    if(linha_A==1){                                                     /*Teste da ordem da matriz para calculo do determinante*/
        det_A = matriz_A[0][0];
        printf("\n\n Determinante de M = %d\n\n\n", det_A);
    }
    else if(linha_A==2){
        det_A = matriz_A[0][0]*matriz_A[1][1] - matriz_A[0][1]*matriz_A[1][0];
        printf("\n\n Determinante de M = %d\n\n\n", det_A);
    }
    else if(linha_A==3){
        det_A = matriz_A[0][0]*matriz_A[1][1]*matriz_A[2][2] + matriz_A[0][1]*matriz_A[1][2]*matriz_A[2][0] + matriz_A[0][2]*matriz_A[2][1]*matriz_A[1][0] - matriz_A[0][2]*matriz_A[1][1]*matriz_A[2][0] - matriz_A[0][1]*matriz_A[1][0]*matriz_A[2][2] - matriz_A[0][0]*matriz_A[2][1]*matriz_A[1][2];
        printf("\n\n Determinante de M = %d\n\n\n", det_A);
    }
    else{
        printf("\n\n ERRO! Determinante de M nao pode ser calculado para ordem maior que 3!\n\n\n");
    }
}


//Luiz Carlos de Lemos Junior - LP1 Noturno
