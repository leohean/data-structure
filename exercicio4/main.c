#include "exercicio4.h"

int main(){
    Noh *raiz; 

    int n;
    scanf("%d", &n);

    int *o=(int*)malloc(n*sizeof(int));
    int *valores=(int*)malloc(n*sizeof(int));

    int cont=0;
    for(int i=0; i<n; i++){;
        scanf("%d", (o+i));

        if(*(o+i)==2){
            int valor;
            scanf("%d", (valores+cont));
            cont++;
        }
    }

    cont=0;
    for(int j=0; j<n; j++){
        int op=*(o+j);

        switch(op){
            case 1:
                inicializarArvore(&raiz);
            break;
            case 2:
                inserirNoh(*(valores+cont), &raiz);
                cont++;
            break;
            case 3:
                imprimirPreOrdem(raiz);
                printf("\n");
            break;
            case 4:
                imprimirInOrdem(raiz);
                printf("\n");
            break;
            case 5:
                imprimirPosOrdem(raiz);
                printf("\n");
            break;
            case 6:
                liberarArvore(raiz);
            break;
        }
    }
    /*
    inserirNoh(20, &raiz);
    inserirNoh(15, &raiz);
    inserirNoh(10, &raiz);
    inserirNoh(25, &raiz);
    inserirNoh(23, &raiz);
    inserirNoh(24, &raiz);
    inserirNoh(30, &raiz);
    inserirNoh(28, &raiz);
    inserirNoh(35, &raiz);

    imprimirPreOrdem(raiz);
    printf("\n");*/
    /*
    imprimirPosOrdem(raiz);*/
}