/*
GoalException:
- jogador que recebeu a infração
- jogador que cometeu a infração
- tipo de infração
    - Falta:
    F_a[a][b]>0.7 (falta de a em b)
    F_b[b][a]>0.7 (falta de b em a)

    - Impedimento:
    p[a]>p[b], para todo b impedido por a
    p[b]>p[a], para todo a impedido por b
a1 -> b1 5
a1 -> b2 3
Goal
- jogador[0-10]
- time
- F_a
- F_b
- P(x,y)
*/

#include <exception>
#include <iostream>
#include <string>

enum class TipoInfracao { Falta, Impedimento };

class GoalException: public std::exception {
    public:
        std::string jogador_cometeu;
        std::string jogador_recebeu;
        //Construtor
        GoalException(const std::string& cometeu, const std::string& recebeu, TipoInfracao tipo):
            jogador_cometeu(cometeu), jogador_recebeu(recebeu) {
                if(tipo == TipoInfracao::Falta) errorMessage = "Ocorreu uma falta de " + jogador_cometeu + "em" + jogador_recebeu + "!";
                else if(tipo == TipoInfracao::Impedimento) errorMessage = "Ocorreu um impedimento de " + jogador_cometeu + "em" + jogador_recebeu + "!";
            }
        const char* what() const noexcept override {
            return errorMessage.c_str();
        }
    private:
        std::string errorMessage;
};

class Goal {
    public:
        std::string jogador_cometeu;
        std::string jogador_recebeu;
        std::string time;
        

        Goal(const std::string& cometeu, const std::string& recebeu)
}

bool falta()