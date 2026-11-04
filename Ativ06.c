#include <stdio.h>
#include <string.h>
#define TAM 500

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


int main() {
    printf("Digite uma sequencia de até %d numeros desordenados:\n",TAM);

    int vetnum[TAM]={0};
    char continualendo='V';
    while(ind<TAM && continualendo ) { //Leitura dos números dados pelo usuário 
        scanf("%d",&vetnum[ind]);
        if(vetnum[ind]==0) {
            continualendo='F';
        }
        ind++;
        
    }

    int indnaoord=0;
    while(indnaoord<TAM-1) {
        posmenor= buscamenor(vetnum,indnaoord,TAM);
        if(posmenor!=indnaoord) {
            afastaecoloca(vetnum,indnaoord,posmenor);
        }
        indnaoord++;
    }

    printf("A sequencia ordenada:\n");
    int ind=0;
    while(ind<TAM) {
        printf("%d-",vetnum[ind]);
        ind++;
    }












}