#include <stdio.h>
#include <stdlib.h>

#ifndef estruturas.h
    #define estruturas.h
#endif


typedef struct list {
    void *elem;
    struct list* next;
} Lista;

typedef struct pessoa {
    char *nome;
    int idade;
} Pessoa;

typedef struct aluno {
    Pessoa p; //char *nome + int idade
    char *curso;
} Aluno;

typedef struct professor {
    Pessoa p;
    float salario;
    char *departamento;
} Professor;

typedef struct administrativo {
    Pessoa p;
    char *cargo;
    char *chefe;
} Adm;


