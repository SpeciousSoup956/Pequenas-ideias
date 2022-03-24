/******************************************************************************
OBJETIVO: RESOLVER EQUAÇÕES
NOME: -----
DATA DE CRIAÇÃO: 22.03.2022
STATUS: ANDAMENTO...
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>


int topo (void)
{
    //cabeçalho
  printf("**********************************");
  printf("\nBem vindo (a) ao Equaciona+");
  printf("\n**********************************\n");
  
}

/*int escolha (void)
{
    //variaveis
    
  
}*/

int main()
{
   setlocale(LC_ALL, "Portuguese");
   
   //variaveis
   int valor = 0;
   
   //desenvolvimento
   topo();
  printf ("\n >> ");
  printf("Qual tipo de Equação você quer resolver?\n");
  printf("\n1. Equação de 1° Grau.");
  printf("\n2. Equação de 2° Grau.");  
  printf ("\n\n>>> Digite o número da operação desejada: ");
  scanf("%d", &valor);
  

    return 0;
}
