#include <iostream>
#include <string>
#include "contribuinte.h"
#include <stdexcept>
#include <exception>

class PessoaFisica : public Contribuinte
{
private:
    /* data */
public:
    std::string cpf;
    PessoaFisica(std::string cpf);
    ~PessoaFisica();
    double Imposto;    
    void CalcularImposto() override
    {
        if(rendaAnual == 0) {
            throw runtime_error("Renda não informada");
        }
        Imposto = rendaAnual*0,275;
    }
    void PagarImposto() override
    {
        if(saldo < Imposto) {
            throw runtime_error("Saldo insuficiente");
        }
        
        
    }
};

