#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "apresentacao.h"//Inclusão da biblioteca criada

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
        printf("\tInvalido.\n");
        outraAtv();
    }else if(opcao == 1){calcular();}
    else if(opcao == 0){sair();}
}//menu

void calcular(){
    int num, den, limite, expo = 1 , soma = 0;

    printf("Defina o numerador: ");
    scanf("%i", &num);
    printf("Defina o denominador: ");
    scanf("%i", &den);
    limite = den;

    while(expo <= limite){
        //Pecorrimento entre os valores para a realização do cálculo
        soma = soma + (pow(num, expo)/den);

        expo++;
        den--;
    }

    printf("\nResultado: %i\n", soma);
    outraAtv();
}//calcular

void sair(){
    printf("\n\tObrigado.\n");
    apresenta();//Função vinculada a biblioteca
    system("pause");
    system("exit");
}//sair

void outraAtv(){
    int escolha;

    printf("\nRealizar outra atividade?\n");
    printf("1 > SIM | 0 > NAO: ");
    scanf("%i", &escolha);

    if (escolha < 0 || escolha > 1){
        printf("\tInvalido.");
        outraAtv();
    }else if (escolha == 1){
        menu();
    }else{
        sair();
    }
}//outraAtv

int main()
{
    menu();
}//main
