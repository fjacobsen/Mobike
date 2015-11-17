#include<iostream>
#include<fstream>
#include<vector>
#include "bike.h"

using namespace std;

void mobike::devolver(int d) {
 int dev = 1;
    vector<int> bikes;

    bikes[0] = 1;
    bikes[1] = 1;
    bikes[2] = 1;
    bikes[3] = 1;
    bikes[4] = 0; //0 = sem bicicleta no posto
    bikes[5] = 1;
    bikes[6] = 1;
    bikes[7] = 0;
    bikes[8] = 1;
    bikes[9] = 1;
    bikes[10] = 0;


    cout << "############ Mobike posto PUCRS ############" << endl;

    for(int i=1; i <= 10 ; i++){
        

    cout << "Para devolver a bike digite "<< dev << endl;
    cin >> dev;


    if(dev == 1)
        cout << "Bike devolvida" << endl;

    else if(dev!=1) {
        cout << "Bike não foi devolvida " << endl;
    }
  }
}

int main() {
     //int dev;
    ifstream arq;
    cout << "Abrindo arquivo texto..." << endl;

    arq.open( "Bikes.txt" , ios::in );

    if (!arq.is_open())
        return 0;

    do
    {
        int valor;
        arq >> valor;
        if(!arq.fail()) {
            cout << valor << endl;
        }
    } while(arq.good());
    if(arq.bad() || !arq.eof()) {
        cout << "Erro fatal!" << endl;
        //exit(1); 
    }
    cout << "Fechando o arquivo..." << endl;
    arq.close();
    
 
 //cout << "Para devolver a bike digite:(1), para sair digite(0)"<< endl;
 //cin << dev;


return 0;

}

