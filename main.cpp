#include <iostream>

using namespace std;

#include "cliente.h"
#include "fila.h"

int main()
{
    int tam, ini, entram, tempo;
    cout<<"Defina a quantidade de caixa: ";
    cin>>tam;
    TFila<string> *fila= new TFila<string>[tam];
    Cliente<string> Cliente[4];

    for(int i=0; i<tam; i++){
    IniciaFila(fila[i]);
    }

    cout<<"Defina a quantidade de clientes inicial: ";
    cin>>ini;
    cout<<"Defina a quantidade de clientes a cada unidade de tempo: ";
    cin>>entram;
    cout<<"Defina o tempo da simulacao ";
    cin>>tempo;

    for(int i=0; i<(ini+entram); i++)
    geranome(Cliente[i]);

    for(int i=0; i<ini; i++){
        Insere_Fila(fila[i], Cliente[i].Nome);
    }

    cout<<Remove_Fila(fila[10])<<endl;
    cout<<Remove_Fila(fila[10])<<endl;
    cout<<Remove_Fila(fila[10])<<endl;
    return 0;
}
