#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char rua[32];
    char complemento[64];
    char bairro[32];
    char cep[12];
    char cidade[32];
    char estado[32];
    char pais[32];
    int numero;
} Endereco;

typedef struct {
    int ddd;
    int numero;
} Telefone;

typedef struct {
    int dia;
    int mes;
    int ano;
} Aniversario;

typedef struct Usuario {
    char nome[32];
    char email[32];
    char curso[8];
    char observacao[128];
    Endereco endereco;
    Telefone telefone;
    Aniversario aniversario;
};

int main() {

    return  0;
}