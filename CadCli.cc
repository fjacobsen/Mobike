#include<fstream>
#include<iostream>

using namespace std;

int main() {


// Cria input file stream (ifstream)
    ifstream arq;

    cout << "Abrindo arquivo texto..." << endl;

    // Abre arquivo
    arq.open( "CadastroClientes.txt" , ios::in );

    // Se houver erro, sai do programa
    if (!arq.is_open())
        return 0;
    // Agora, lê n registros numéricos
    do
    {
        string nome;
        int fone, cc;
        arq >> nome >> fone >> cc;
        if(!arq.fail()) {
            cout << "Cliente:" << nome << "\t" << "Fone:(051)" << fone << "\t" << "cartão crédito: " << cc <<  endl;
        }
    } while(arq.good());
    if(arq.bad() || !arq.eof()) {
        cout << "Erro fatal!" << endl;
    }
    cout << "Fechando o arquivo..." << endl;
    arq.close();

    return 0;
}
