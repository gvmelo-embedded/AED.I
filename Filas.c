#include <stdio.h>
#include <stdlib.h>

typedef struct TipoElem {
    int chave;
    struct TipoElem *prox;
} TipoElem;

TipoElem *cabeca=NULL; //Ponteiro do primeiro elemento 
TipoElem *outro=NULL; //Ponteiro de outro elemento 
TipoElem *ultimo=NULL; //Ponteiro do último elemento

//Função 
TipoElem* CriaNovoElem(int novachave) {
    TipoElem *NovoElem;
    NovoElem = (TipoElem*)malloc(sizeof(TipoElem));
    NovoElem->chave = novachave;
    NovoElem->prox = NULL;
    return NovoElem;
}

TipoElem* InsereNovo(TipoElem *ultimo, TipoElem *NovoElem) {
    ultimo->prox = NovoElem; //Inserindo o novo elemento na fila    
    ultimo = NovoElem; //Reposicionando o ultimo elemento da fila
    return ultimo; 
}

int LeiaUmNumero() {
    int ChaveLida; 
    printf("Digite um numero inteiro (0 para sair): ");
    scanf("%d",&ChaveLida);
    return ChaveLida;
    }

TipoElem* ExibaFila(TipoElem* 
    

int main() {
    int ChaveLida;
    cabeca = NULL;
    ChaveLida= LeiaUmNumero();
    while(ChaveLida!= 0) {
        outro = CriaNovoElem(ChaveLida);
        if(cabeca == NULL) {
            cabeca = outro;
            ultimo = cabeca;
        } else {
            ultimo = InsereNovo(ultimo, outro);
        }
        ChaveLida= LeiaUmNumero();
    }

}
