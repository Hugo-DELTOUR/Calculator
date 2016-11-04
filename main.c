#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b){
    return a+b;
}

int soustraction(int a, int b){
    if(a>b){
        return a-b;
    }
    else{
        return b-a;
    }
}
int main()
{

    printf("L addition de a et de b vaut: %d\n", addition(1,4));
    printf("Le resultat de la soustraction est: %d\n", soustraction(1,4));

    return 0;
}
