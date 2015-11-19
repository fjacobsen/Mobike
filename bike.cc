#include"bike.h"
void mobike::retirar(int r) {
    int cartao;
    int credito;
    cout << "############ Mobike posto PUCRS ############" << endl;

 
// inicio tentativa de incluir dados do txt ao vetor
    vector <int> disponibilidade;
    int valor=0;


    ifstream file ("Bikes.txt");
    if ( file.is_open())
    {
        while  (! file.eof())
        {
            while (file >> valor) {
                disponibilidade.push_back(valor);
            }
        }
    } else {
        cout << "Não foi possível abrir o arquivo."<<endl;
    }
    for ( int i = 0; i < disponibilidade.size(); i++) {
        if(disponibilidade[i] == 1) // tentativa de melhorar
        {
            cout << "Bike disponível" << endl;
        }
        //cout << disponibilidade[i] << endl;
        else if(disponibilidade[i] == 0)
        {
            cout << "Bike indisponível" << endl;
        }

    }

    file.close();
//fim
    int opcao;
    int bike;
    cout << "Olá, já é usuário? " << endl;
    cout << "1 para sim ou 0 para não" << endl;
    cin >>opcao;
    if(opcao == 1)
    {
        cout << "Seja bem vindo novamente, qual bike deseja retirar?" << endl;
        cin >> bike;
}
//TODO fazer o programa alterar a disponibilidade no txt de 1 para 0
 
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
//    for(int i=1; i <= 10 ; i++)
//    {
//        if(bikes[i] == 0)
//            cout << "Não há bike no lugar " << i << endl;
//        else if(bikes[i] == 1)
//            cout << "Há bike no lugar " << i << endl;

}


cout << "Informe o numero do cartao:" << endl;
cin >> cartao;

if(cartao != 0) // supondo que se o cartao for diferente de 0 ele é valido
{
    cout << "Informe 1 para passe diario ou 2 para passe mensal" << endl;
    cin >> credito;
    if(credito == 1)    // credito 1 = passe diario
    {
        cout << "Você escolheu o passe diário, bom passeio." << endl;
    }

    else if(credito == 2) // credito 2 = passe mensal
    {
        cout << "Você escolheu o passe mensal, bom passeio." << endl;
    }

}
}

void mobike();


void devolver(int d);
void verificacredito (int v);
void carregaarquivo();
//prefixo de classe abrir fechar chave e ver se compila
