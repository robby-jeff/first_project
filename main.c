#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//fonction itérative
int fibo_iter(int n){
    int premier = 0;
    int second = 1;
    int temporaire;
    while(n--){
        temporaire = premier+second;
        premier = second;
        second = temporaire;
    }
    return premier;
}

//fonction recursive
int fibo_recur(int n)
{
    if(n<=1) return n;
    else return fibo_recur(n-2) + fibo_recur(n-1);
}
