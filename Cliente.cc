#include<fstream>
#include<iostream>

#include"Cliente.h"


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
