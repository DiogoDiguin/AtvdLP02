#include <stdio.h>
#include <stdlib.h>
#include "apresentacao.h" //Inclusão da biblioteca criada
#define MAX 3

/*
Diogo Vitor Oliveira Leme
RA: 836846
Engenharia de Software - UNAERP RP
*/

void menu(){
    int opcao;
    system("cls");

    printf("\t-MENU-\n");
    printf("1 > Calcular\n");
    printf("0 > Sair\n");
    printf("Escolha: ");
    scanf("%i", &opcao);

    if(opcao < 0 || opcao > 1){
        printf("Invalido.");
        outraAtv();
    }else if(opcao == 1){calcular();}
    else if(opcao == 0){sair();}
}//menu

void outraAtv(){
    int escolha;

    printf("\nRealizar outra atividade?\n");
    printf("1 > SIM | 0 > NAO: ");
    scanf("%i", &escolha);

    if (escolha < 0 || escolha > 1){
        printf("Invalido.");
        outraAtv();
    }else if (escolha == 1){ menu(); }
    else{ sair(); }
}//outraAtv

void calcular(){
    int num, i = 1, limite;

    printf("Digite o valor: ");
    scanf("%i", &num);
    printf("\n");
    limite = num;

        while(i <= limite){
            //Condicional de apresentação dos divisiveis
            if(num%i == 0){
                printf("%i e divisivel por %i\n", num, i);
            }
        i++;
        }

    outraAtv();
}//calcular

void sair(){
    printf("\n\tObrigado.\n");
    apresenta();//Função vinculada a biblioteca
    system("pause");
    system("exit");
}//sair

int main(){
    menu();
}//main
