#include <stdio.h>
#include <string.h>
#define TAM 5 

int vetnum[TAM]={0};
int ind=0;
int indnaoord;
int posmenor;

//Funções
int buscamenor(int vet[],int inicio, int fim) {
    int posmenor=inicio;
    inicio++;
    while(inicio<fim) {
        if(vet[posmenor]>vet[inicio]) {
            posmenor=inicio;
        }
        inicio++;
    }
    return posmenor;
}

void afastaecoloca(int vet[],int indnaoord, int posmenor) {
    int menor= vet[posmenor];
    while(posmenor>indnaoord) {
        vet[posmenor]=vet[posmenor-1];
        posmenor--;
    }
    vet[indnaoord]=menor;
}

int main(){
    int indnaoord=0;
    while(indnaoord<TAM-1) {
        posmenor= buscamenor(vetnum,indnaoord,TAM);
        if(posmenor!=indnaoord) {
            afastaecoloca(vetnum,indnaoord,posmenor);
        }
        indnaoord++;
    }








    
}