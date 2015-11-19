#include<iostream>
#include<vector>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "bike.h"
#include"bike.cc"

using namespace std;



int main() {

// Cria input file stream (ifstream)
    ifstream arq;

    cout << "Abrindo arquivo texto..." << endl;

    // Abre arquivo
    arq.open( "Bikes.txt" , ios::in );

    // Se houver erro, sai do programa
    if (!arq.is_open())
        return 0;
// Agora, lê n registros numéricos
    do
    {
        int valor;
        arq >> valor;
        if(!arq.fail()) {
            cout  << valor << endl;
        }
    } while(arq.good());
    if(arq.bad() || !arq.eof()) {
        cout << "Erro fatal!" << endl;
        exit(1);		// Aborta programa
    }
    cout << "Fechando o arquivo..." << endl;
    arq.close();

    int opcao;
    int bike;
    cout << "Olá, já é usuário? " << endl;
    cout << "Digite 1 para sim ou 0 para não" << endl;
    cin >>opcao;
    if(opcao == 1)
    {
        cout << "Qual Bike deseja retirar?" << endl;
        cin >> bike;
//TODO alterar no .txt a bike retirada
    }
    else if(opcao == 0)
    {
        cout << "Deseja fazer cadastro?" << endl;
        cin >> opcao;
        if(opcao == 1)
        {   cout << "Cadastro realizado" << endl;
        }
        else if(opcao == 0)
        {   cout << "Encerrando..." << endl;
        }
    }
  //  mobike m;
   // m.retirar(6);
}

