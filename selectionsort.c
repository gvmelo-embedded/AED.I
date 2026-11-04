#include <stdio.h> 
#define TAM 5

//Função de buscar o indice do menor
int indm;
int buscarmenor(int vet[],int ind){
    while(ind<TAM){
        if(vet[ind]<vet[indm]){
            indm=ind;
        }
        ind++;
    }
    return indm;
}



int vetnum[TAM]={0};
int indvet=0;
int indmenor;
int copia;

int main() {
    while(indvet<TAM-1){
        indmenor=buscarmenor(vetnum,indvet);
        if(indmenor!=indvet){
            copia=vetnum[indvet];
            vetnum[indvet]=vetnum[indmenor];
            vetnum[indmenor]=copia;
        }
        indvet++;
    }

    









}