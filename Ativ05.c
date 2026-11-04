//Ordenação de n numeros tq n>3

#include <stdio.h> 
int tam=500;
int vetn[tam]={0};
int indvet=0;
int guardador;

//Função de troca
int troca(int vet[],int pos1,int pos2) {
    if(vet[pos1]>vet[pos2]) {
        guardador= vet[pos1];
        vet[pos1]=vet[pos2];
        vet[pos2]=guardador;
    }
}


int main() {
    
indvet=0;
while(indvet<tam) {
    scanf("%d",&vetn[indvet]);
    indvet++;
    }
 












}

