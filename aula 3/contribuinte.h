#ifndef CONTRIBUINTE_H
#define CONTRIBUINTE_H

#include <iostream>
#include <string>
#include <exception>

#include <map>

using namespace std;

class Contribuinte { 
protected:
    string nome;
    int id;
    double rendaAnual;
    double saldo;

public:
    Contribuinte(std::string n, int id, double ra, double s) : nome(n), id(id) {}
    ~Contribuinte() {};
    
    bool ImpostoPago(std::map<int, Contribuinte> pagos)
    {
        if(pagos.count(this->id)) return true;
        return false;
    }

    virtual void CalcularImposto() =0;
    virtual void PagarImposto() = 0;
};

#endif