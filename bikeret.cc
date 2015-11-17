#include<iostream>
#include<vector>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "bike.h"



using namespace std;


//cout << "Testando" << endl;
void mobike::retirar(int r) {
    int cartao;
    int credito;
    //float tempo;
    ; //São 10 bicicletas no posto. esse vetor tem 10 valores, cada um é um inteiro

    bikes[0]=100;
    bikes[1] = 1;
    bikes[2] = 1;
    bikes[3] = 1;
    bikes[4] = 0; //0 = sem bicicleta no posto
    bikes[5] = 1;
    bikes[6] = 1;
    bikes[7] = 0;
    bikes[8] = 1 ;
    bikes[9] = 1;
    bikes[10] = 0;

    cout << "############ Mobike posto PUCRS ############" << endl;
    for(int i=1; i <= 10 ; i++)
    {
        if(bikes[i] == 0)
            cout << "Não há bike no lugar " << i << endl;
        else if(bikes[i] == 1)
            cout << "Há bike no lugar " << i << endl;

    }


    cout << "Informe o numero do cartao:" << endl;
    cin >> cartao;

    if(cartao != 0) // supondo que se o cartao for diferente de 0 ele é valido
    {
        cout << "Informe 1 para passe diario ou 2 para passe mensal" << endl;
        cin >> credito;
        if(credito == 1)    // credito 1 = passe diario
        {

        }

        else if(credito == 2) // credito 2 = passe mensal
        {

        }

    }



}
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
    cout << "Olá, já é usuário? " << endl;
    cout << "Digite 1 para sim ou 0 para não" << endl;
    cin >>opcao;
    if(opcao == 1)
    {
        return 2001;
    }
    else if(opcao == 0)
    {
        cout << "Deseja fazer cadastro?" << endl;
    }
    mobike m;
    m.retirar(6);
}
