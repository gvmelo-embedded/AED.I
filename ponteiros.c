#include <stdio.h>

int *PontInt;
int num;

typedef struct pessoa{
        int idade;
        float peso;
        int altura;
    } TipoGente;
 
int main() {
    TipoGente Gente;

    Gente.idade=28;
    Gente.peso=67.8;
    Gente.altura=195;

    TipoGente *PontGente;
    
    num=5;
    PontInt=&num;

    PontGente=&Gente;

    PontGente->peso= 56.7;
    PontGente->idade= 21;


    printf("%f\n",Gente.peso);
    printf("%d\n",Gente.idade);
    printf("%p\n",(void*)PontInt);








}