#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    int r = 1;
    int fib;
    while(r==1){
        printf("De quelle maniere voulez-vous calculer la valeur du rang n de la suite de Fibonacci ?\n");
        printf("Tapez 1 si c'est de maniere iterative\n");
        printf("Tapez 2 si c'est de maniere recursive\n");
        scanf("%d",&fib);
        int test;
        if(fib == 1){
            int nbr;
            printf("veuillez entrer le nombre :");
            scanf("%d",&nbr);
            printf("Pour n = %d l'algorithme renvoie : %d\n",nbr,fibo_iter(nbr));
            printf("Tapez 1 si vous voulez faire un autre essai si non tapez 0\n");
            scanf("%d",&r);
        }
        if(fib == 2){
            int nbr;
            printf("veuillez entrer le nombre :");
            scanf("%d",&nbr);
            printf("Pour n = %d l'algorithme renvoie : %d\n",nbr,fibo_recur(nbr));
            printf("Tapez 1 si vous voulez faire un autre essai si non tapez 0\n");
            scanf("%d",&r);
        }
        if((fib != 1)&&(fib != 2)){
            printf("Erreur, c'est soit 1 ou 2\n");
            printf("Tapez 1 si vous voulez faire un autre essai si non tapez 0\n");
            scanf("%d",&r);
        }
    }
  return 0;
}