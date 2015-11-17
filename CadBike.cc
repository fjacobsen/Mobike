#include<fstream>
#include<iostream>

using namespace std;

int main() {


// Cria input file stream (ifstream)
    ifstream arq;

    cout << "Abrindo arquivo texto..." << endl;

    // Abre arquivo
    arq.open( "Bikes.txt" , ios::in );

    // Seid carregar  houver erro, sai do programa
    if (!arq.is_open())
        return 0;
    // Agora, lê n registros numéricos
    do
    {
        int numeroBike;
                arq >> numeroBike ;
        if(!arq.fail()) {
            cout << "Numero da Bike:" << numeroBike << endl;
        }
    } while(arq.good());
    if(arq.bad() || !arq.eof()) {
        cout << "Erro fatal!" << endl;
    }
    cout << "Fechando o arquivo..." << endl;
    arq.close();

    return 0;
}





