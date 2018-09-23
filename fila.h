#ifndef FILA_H
#define FILA_H

#include <iostream>

using namespace std;

template <typename TIPO>
struct TItem{
    TIPO dado;
    TItem<TIPO> *proximo;
};

template <typename TIPO>
struct TFila{
    TItem<TIPO> *inicio;
};

template <typename TIPO>
void IniciaFila(TFila<TIPO> &fila){
    fila.inicio = NULL;
}

template <typename TIPO>
TItem<TIPO> *NovoElemento(TIPO dado){
    TItem<TIPO> *novo=new TItem<TIPO>;
      novo->dado=dado;
      novo->proximo=NULL;
    return novo;
}

template <typename TIPO>
bool Insere_Fila(TFila<TIPO> &fila, TIPO dado){
    TItem<TIPO> *novo=NovoElemento(dado);
    if(fila.inicio==NULL){
        fila.inicio=novo;
        return true;
    }else{
        TItem<TIPO> *nav=fila.inicio;
        while(nav->proximo!=NULL)
        nav=nav->proximo;
        nav->proximo=novo;
        return true;
    }
    return false;
}

template <typename TIPO>
TIPO Remove_Fila(TFila<TIPO> &fila){
    if(fila.inicio!=NULL){
       TItem<TIPO> *nav=fila.inicio;
       fila.inicio=nav->proximo;
       TIPO dado;
       dado=nav->dado;
       delete nav;
       return dado;
    }
    return "Fila Vazia";
}



#endif // FILA_H
