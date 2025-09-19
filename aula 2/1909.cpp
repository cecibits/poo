/*
Anotações da aula

Tratamento de exceções
*/

#include <exception>
#include <iostream>

class ZeroDivision: public std::exception {
    public:
        int numerador;
        ZeroDivision(const int num, const std::string str):
            errorMessage(str), numerador(num){}
        const char * what() const noexcept override {
            return errorMessage.c_str();
        }
    private:
        std::string errorMessage;
}; //instrução termina com ;

double dividir(double num, double den) {
    if(den == 0) throw ZeroDivision(num, "Divisao por zero");
    return num/den;
}

int main() {
    double a, b;
    std::cin>>a;
    std::cin>>b;

    try
    {
        double r = dividir(a,b);
        std::cout<<"Resultado:"<<r<<std::endl;
    }
    catch(const ZeroDivision& e)
    {
        std::cout << "Numerador:" << e.numerador << ";" << e.what() << std::endl;
    }
    catch(std::exception & e) {}
    
}



