#include <iostream>
#include <string>
#include <map>
#include <stdexcept>
#include <exception>
#include "pessoafisica.h"

class Pagamento {
    public:
        int idContribuinte;
        double valorPago;
        uint data; 
};

std::map<int, Pagamento> pagamentos; 

int main() {
    double rendaAnual;
    double Imposto;
    try {
        CalcularImposto(rendaAnual);
        //cout << "Imposto a ser pago é de R$" << Imposto << end1;
    }
    catch (const runtime_error& e){
        cout << "Erro: " << e.what() << end1;
    }
}