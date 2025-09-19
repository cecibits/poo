#include <'estruturas.h'>


#ifndef estruturas.h
    #define estruturas.h
#endif

def criaPessoa() {

} 

Lista * AddElem(void * elem, Lista * cur)
{
    Lista * new = (Lista *) malloc(sizeof(Lista));
    new->elem = elem;
    new->next = cur;
    return new;
}

int main() {
    Aluno *a = (Aluno *) malloc(sizeof(Aluno));
    Professor *p = (Professor *) malloc(sizeof(Professor));
    Adm *t = (Adm*) malloc(sizeof(Adm));
    
    a->p.nome = "fulano";
    a->p.idade = 19; 
    a->curso = "turismo";

    p->p.nome = "beltrano";
    p->p.idade = 25;
    p->salario = 5030.7;
    p->departamento = "fisica";

    t->p.nome = "ciclano";
    t->p.idade = 30;
    t->cargo = "assistente";
    t->chefe = "beltrano";

    Lista * l = AddElem(a, NULL);
    l = AddElem(p, l);
    l = AddElem(t, l);


    for (Lista* list = l; list != NULL; list=list->next) {
        Pessoa *p = (Pessoa *) list->elem;
        printf("%s \n", p->nome);
        printf("%d \n", p->idade);
    }

    return 0;
}