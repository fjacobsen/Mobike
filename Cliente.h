#include<fstream>
#include<iostream>

using namespace std;

friend std::ostream& operator<<(std::ostream&, const Cliente&);

class Cliente {
private:
    string nome;
    string fone;
    string cpf;

public:
    Cliente(string n; string f, string cpf);
    void ProcuraCliente(string nome, string fone, string cpf);
    void retirar(int r);
};

