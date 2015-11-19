#include"bike.h"
void mobike::retirar(int r) {
    int cartao;
    int credito;
    //float tempo;
     //São 10 bicicletas no posto. esse vetor tem 10 valores, cada um é um inteiro
    //bikes[0]=100;
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

 void mobike();

    
    void devolver(int d);
    void verificacredito (int v);
    void carregaarquivo();
//prefixo de classe abrir fechar chave e ver se compila
