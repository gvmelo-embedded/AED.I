//Algoritmo de ordenação pela metodologia de bubble sort

#include <stdio.h>

#define TAMANHO 5

int pega;
void troca(int vetor[],int pos1,int pos2){
    if(vetor[pos1]>vetor[pos2]){
        pega=vetor[pos1];
        vetor[pos1]=vetor[pos2];
        vetor[pos2]=pega;
    }
}

int main() {
    //int tamanho=5;
    int vetnum[TAMANHO]={0};
    int inicio=0;
    int trocou=0;
    int indvet;
    int guardar;

    while(inicio<TAMANHO-2){
        trocou==0;
        indvet=inicio;
        while(indvet<TAMANHO-2){
            if(vetnum[indvet]>vetnum[indvet+1]){
                troca(vetnum,indvet,indvet+1);
                trocou==1;
            }
            indvet++;
            if(indvet==TAMANHO-1){
                if(trocou==0){
                    inicio++;
                }
            }
        }
    }
    

















}