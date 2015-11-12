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
Cliente::cliente(string n; string f, string cpf) {

    nome = n;
    fone = f;
    cpf = cpf;

}
ostream& operator<<(std::ostream&, const Cliente& c) {

    s << "Nome=" << c.n;
    s << " Fone=" << c.f;
    s << " CPF=" << c.cpf;

    return s;

}
