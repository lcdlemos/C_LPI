#include<stdio.h>

struct cadastro{
    char nome[10], endereco[10], sexo;
    int idade;
    float salario;
}joao, maria;

main(){
    strcpy(joao.nome, "joao paulo");
    strcpy(joao.endereco, "rua da luz");
    joao.sexo = 'm';
    joao.idade = 34;
    joao.salario = 3200.56;

    strcpy(maria.nome, "maria leite");
    strcpy(maria.endereco, "rua da trepada");
    maria.sexo = 'f';
    maria.idade = 19;
    maria.salario = 300.23;

    printf(" Funcionario: %s\n Endereco: %s\n Sexo: %c - Idade: %d - Salario: %.2f\n\n", joao.nome, joao.endereco, joao.sexo, joao.idade, joao.salario);
    printf(" Funcionario: %s\n Endereco: %s\n Sexo: %c - Idade: %d - Salario: %.2f\n\n", maria.nome, maria.endereco, maria.sexo, maria.idade, maria.salario);
}
