#include<iostream>
#include<vector>
#include "bike.h"



using namespace std;

//cout << "Testando" << endl;
 void mobike::retirar(int r){

  int cartao;
  int credito;
  //float tempo;
 vector<int> bikes(10);; //São 10 bicicletas no posto. esse vetor tem 10 valores, cada um é um inteiro
bikes[1] = 1;
bikes[2] = 1;
bikes[3] = 1;
bikes[4] = 0;
bikes[5] = 1;	//TODO fazer o programa entender que 0 = sem bicicleta no posto
bikes[6] = 1;
bikes[7] = 0;
bikes[8] = 1 ; 
bikes[9] = 1;
bikes[10] = 0;
//for(i=1; bikes[i] ; i++)
for(int i=1; bikes[i] ; i++)
if(bikes[i] == 0)
cout << "Não há bike no posto" << i << endl;
else if(bikes[i] == 1)
cout << "Há bike no posto" << i << endl;
//int retirar = bike - 1;
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
