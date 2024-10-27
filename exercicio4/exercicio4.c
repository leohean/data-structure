#include "exercicio4.h"

void inicializarArvore(Noh **raiz){
    *raiz=NULL;
}

void inserirNoh(int valor, Noh **raiz){
    if(*raiz==NULL){
        Noh *novoNoh=(Noh*)malloc(sizeof(Noh));
        novoNoh->valor=valor;
        novoNoh->dir=NULL;
        novoNoh->esq=NULL;
        *raiz=novoNoh;
    }else if(valor<(*raiz)->valor){
        inserirNoh(valor, &(*raiz)->esq);
    }else if((*raiz)->valor<valor){
        inserirNoh(valor, &(*raiz)->dir);
    }
}

void imprimirPreOrdem(Noh *raiz){
    if(raiz==NULL){
        return;
    }else{

        printf("%d ",raiz->valor);

        if(raiz->esq!=NULL)
            imprimirPreOrdem(raiz->esq);
        if(raiz->dir!=NULL)
            imprimirPreOrdem(raiz->dir);
        
    }
}

void imprimirInOrdem(Noh *raiz){
    if(raiz==NULL){
        return;
    }else{
        imprimirInOrdem(raiz->esq);
        printf("%d ",raiz->valor);

        imprimirInOrdem(raiz->dir);
    }
}

void imprimirPosOrdem(Noh *raiz){
    if(raiz==NULL){
        return;
    }else{
        imprimirPosOrdem(raiz->esq);
        imprimirPosOrdem(raiz->dir);
        printf("%d ", raiz->valor);
    }
}

void liberarArvore(Noh *raiz){
    if(raiz==NULL){
        return;
    }else{
        liberarArvore(raiz->esq);
        liberarArvore(raiz->dir);
        free(raiz);
        printf("0 ");
    }
}