#include <stdio.h>
#include <stdlib.h>
#include "apresentacao.h"//Inclusão da biblioteca criada

/*
Diogo Vitor Oliveira Leme
RA: 836846
Engenharia de Software - UNAERP RP
*/

void menu(){
    int escolha;
    int opcao;

    system("cls");

    printf("\tMENU\n");
    printf("1 > Calcular\n");
    printf("0 > Sair\n");
    printf("Escolha: ");
    scanf("%i", &escolha);

        if(escolha < 0 || escolha > 1){
            printf("\tInvalido.\n");
            outra_funcao();
        }
        if(escolha == 1){ calcular();}
        else if(escolha == 0){sair();}
}//menu

void outra_funcao(){
    int opcao, opcao2;

    printf("\nDeseja executar outra atividade?\n");
    printf("SIM > 1 | NAO > 0: ");
    scanf("%i", &opcao);
    if (opcao == 1){
        menu();
    }else{
        printf("\nCERTEZA?\n");
        printf("SIM > 1 | NAO > 0: ");
        scanf("%i", &opcao2);
        if(opcao2 == 1){
            sair();
        }else if(opcao2 == 0){
            menu();
        }else{
            printf("Invalido.\n");
            printf("Encerrando atividades");
            sair();
        }
    }
}//outra_funcao

void sair(){
    printf("\n\tObrigado.\n");
    apresenta();//Função vinculada a biblioteca
    system("pause");
    system("exit");
}//sair

void calcular(){
    int qtd_cal = 0;
    float i = 1, cal = 0, num;
    char op;

    printf("Defina o numerador: ");
    scanf("%f", &num);
    printf("\n");

    while(i <= num){
    //Percorrimento pelos valores entre o menor e limite
        if (qtd_cal %2 != 0){
        //Operação para calculo em posição IMPAR
            cal = cal + (i / (i * i));
            op = '+';
                if (i == num){
                    op = NULL;
                }
            printf("%.0f/%.0f %c ", i , i*i, op);
        }else if (qtd_cal %2 == 0){
            //Operação para calculo em posição PAR
            cal = cal - (i / (i * i));
            op = '-';
                if (i == num){
                        op = NULL;
                }
            printf("%.0f/%.0f %c ", i , i*i, op);
        }
        qtd_cal++;
        i++;
    }//while

    printf("\nResultado: %.2f\n", cal*-1);
    outra_funcao();
}//calcular

int main()
{
    menu();
}//main

