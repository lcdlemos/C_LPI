#include<stdio.h>

main(){
    int tam;

    printf("\n\t\t ---------------------------------- ");
    printf("\n\t\t Algoritmos de Ordenacao de Numeros ");
    printf("\n\t\t ---------------------------------- \n\n\n");

    printf(" 1) Informe quantos numeros deseja ordenar: ");     //Solicita ao usuario que informe a quantidade de numeros que fornecera
    scanf("%d", &tam);                                          //Usuario informa a quantidade de numeros que fornecera para serem ordenados

    recebe_numero(tam);                                         //Chamada da funcao que compoe o vetor a ter seus elementos ordenados

    printf("\n\n\n FIM DO PROGRAMA! \n\n");                     //Mensagem que informa o final do programa
}                                                               //indica tambem que todas funcoes chamadas foram retornadas ok

int recebe_numero(int tam_vet){                                 //Funcao para o usuario informar os numeros e compor o vetor a ser ordenado
    int cont, vetor[tam_vet];                                   //Variaveis utilizadas no programa: tamanho do vetor e o proprio vetor

    printf("\n 2) Informe os numeros: \n\n");

    for(cont=0; cont<tam_vet; cont++){                          //Construcao do vetor com os valores informados
            printf(" Numero %d: ", (cont+1));                   //ao mesmo tempo que mostra ao usuario qual elemento esta informando
            scanf("%d", &vetor[cont]);
    }

    printf("\n 3) Os numeros foram fornecidos nessa ordem: ");  //Exibicao do vetor informado pelo usuario na ordem digitada
    for(cont=0; cont<tam_vet; cont++){
            printf(" %2.d", vetor[cont]);
    }

    printf("\n\n 4) Apos os algoritmos de ordenacao, temos:");  //Citacao dos algoritmos utilizados na ordenacao
                                                                //Passagem dos parametros obtidos anteriormente e necessarios para cada algoritmo
    printf("\n\n\t A) Bubble Sort: ");
    bubble_sort(vetor, tam_vet);                                //Identificacao e chamada do algoritmo baseado em bubble sort

    printf("\n\n\t B) Insertion Sort: ");
    insertion_sort(vetor, tam_vet);                             //Identificacao e chamada do algoritmo baseado em insertion sort

    printf("\n\n\t C) Selection Sort: ");
    selection_sort(vetor, tam_vet);                             //Identificacao e chamada do algoritmo baseado em selection sort

    printf("\n\n\t D) Quick Sort: ");
    quick_sort(vetor,0,tam_vet);                                //Identificacao e chamada do algoritmo baseado em quick sort (necessarios 3 parametros, por isso a distincao)

    return 1;                                                   //Retorna a funcao principal para finalizar o programa
}

int bubble_sort(int vetor_bubble[], int tam_vet_bubble){        //Escopo da funcao de ordenacao baseada em bubble sort
    int cont_bubble, limite, aux;

    for(limite = tam_vet_bubble-1; limite >= 1; limite--){      //Recebe o tamanho do vetor e estabelece um limite de calculo de iteracao
            for(cont_bubble=0; cont_bubble < limite; cont_bubble++){                //Compara enquanto nao exceder o limite obtido
                    if(vetor_bubble[cont_bubble] > vetor_bubble[cont_bubble+1]){    //Testa se o elemento e maior que o posterior
                         aux = vetor_bubble[cont_bubble];
                         vetor_bubble[cont_bubble] = vetor_bubble[cont_bubble+1];   //Se for, realiza a troca de posicao com ajuda de auxiliar
                         vetor_bubble[cont_bubble+1] = aux;
                    }
            }
    }

    for(cont_bubble=0; cont_bubble<tam_vet_bubble; cont_bubble++){  //Exibe o vetor ordenado depois do algoritmo bubble
            printf(" %2.d", vetor_bubble[cont_bubble]);
    }

    return 1;                                                       //Retorna a funcao anterior: composicao do vetor
}

int insertion_sort(int vetor_insertion[], int tam_vet_insertion){   //Escopo da funcao de ordenacao baseada em insertion sort
    int cont_insertion, limite, aux;

    for(cont_insertion=1; cont_insertion < tam_vet_insertion; cont_insertion++){    //Enquanto for menor que o tamanho do vetor, realiza a iteracao
            aux = vetor_insertion[cont_insertion];
            limite = cont_insertion-1;                              //Define o limite a ser percorrido, no caso a posicao do ultimo elemento

            while((limite>=0)&&(aux<vetor_insertion[limite])){      //Se o limite for maior que a posicao do elemento 1, a[0], e auxiliar menor que o ultimo elemento, a[tamanho do vetor -1], realiza iteracao
                    vetor_insertion[limite+1] = vetor_insertion[limite];    //Elemento posteior recebe a posicao do anterior caso satisfeita condicao
                    limite--;
            }
            vetor_insertion[limite+1] = aux;                                //Atualiza o valor do elemento do vetor com o valor de auxiliar
    }

    for(cont_insertion=0; cont_insertion<tam_vet_insertion; cont_insertion++){
            printf(" %2.d", vetor_insertion[cont_insertion]);       //Exibe o vetor ordenado depois do algoritmo insertion
    }

    return 1;                                                       //Retorna a funcao anterior: composicao do vetor
}

int selection_sort(int vetor_selection[], int tam_vet_selection){   //Escopo da funcao de ordenacao baseada em selection sort
    int cont1_selection, cont2_selection, limite, aux;

    for(cont1_selection=0; cont1_selection<(tam_vet_selection-1); cont1_selection++){ //Realiza comparacao enquanto nao atingir o ultimo elemento do vetor (tamanho -1)
            limite = cont1_selection;                                                 //Limite recebe o valor do primeiro contador
            for(cont2_selection = (cont1_selection+1); cont2_selection<tam_vet_selection; cont2_selection++){   //Contador 2 para auxiliar na comparacao
                    if(vetor_selection[cont2_selection] < vetor_selection[limite]){     //Se o elemento posterior for menor que o anterior
                            limite = cont2_selection;                                   //Muda o paramentro do limite
                    }
                    if(cont1_selection != limite){                                      //Se o contador 1 for diferente de limite,consequencia do teste anterior
                            aux = vetor_selection[cont1_selection];                     //Quer dizer que a[n+1]<a[n], troca do elemento
                            vetor_selection[cont1_selection] = vetor_selection[limite];
                            vetor_selection[limite] = aux;
                    }
            }
    }

    for(cont1_selection=0; cont1_selection<tam_vet_selection; cont1_selection++){
            printf(" %2.d", vetor_selection[cont1_selection]);      //Exibe o vetor ordenado depois do algoritmo selection
    }

    return 1;                                                       //Retorna a funcao anterior: composicao do vetor
}

int quick_sort(int vetor_quick[], int limite, int tam_vet_quick){   //Escopo da funcao de ordenacao baseada em quick sort
    int cont1_quick, cont2_quick, pivo, aux;

    pivo = limite;                                                  //Escolha do pivo como primeiro elemento

    for(cont1_quick = limite+1; cont1_quick <= (tam_vet_quick-1); cont1_quick++){
            cont2_quick = cont1_quick;
            if(vetor_quick[cont2_quick] < vetor_quick[pivo]){       //Se o elemento seguinte for menor que o anterior
                    aux = vetor_quick[cont2_quick];                 //Auxiliar recebe o elemento de elemento posterior
                    while(cont2_quick > pivo){                      //Enquanto a posicao posterior for maior que a do elemento pivo
                            vetor_quick[cont2_quick] = vetor_quick[cont2_quick-1];  //Elemento posterior recebe o de anterior
                            cont2_quick--;
                    }
                    vetor_quick[cont2_quick] = aux;                 //Troca e finalizada com aribuicao de auxiliar ao anterior
                    pivo++;                                         //Incremente o pivo, a referencia
            }
    }
    if(pivo-1 > limite){                                       //Testa se pivo e maior que o limite inferior, posica do elemento 1, ou esquerda
        quick_sort(vetor_quick, limite, pivo-1);               //Chama a propria funcao por recursividade, reduzindo a posicao do pivo e usando o limite inferior como paramentro
    }
    if(pivo+1 < (tam_vet_quick-1)){                             //Testa se pivo e menor que o limite superior, tamanho do vetor, ou direita
        quick_sort(vetor_quick, tam_vet_quick-1, pivo+1);        //Chama a propria funcao por recursividade, aumentando a posicao do pivo e usando o limite superior, tamanho do vetor, como parametro
    }

    for(cont1_quick=0; cont1_quick<tam_vet_quick; cont1_quick++){
            printf(" %2.d", vetor_quick[cont1_quick]);              //Exibe o vetor ordenado depois do algoritmo quick
    }

    return 1;                                                        //Retorna a funcao anterior: composicao do vetor


 }
