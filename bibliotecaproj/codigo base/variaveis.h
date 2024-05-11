#ifndef VARIAVEIS_H
#define VARIAVEIS_H

FILE* arquivo;
#define tamanho 100
#define arquivoFechar fclose(arquivo);
<<<<<<< HEAD
<<<<<<<< HEAD:bibliotecaproj/codigo base/variaveis.h
#define arquivoLeitura arquivo = fopen(nomedoarquivo, "rb");
#define arquivoLeitura2 arquivo = fopen(nomedoarquivo2, "rb");
#define arquivoEditar arquivo = fopen(nomedoarquivo, "ab");
========
#define arquivoLeitura arquivo = fopen(nomedoarquivo, "r");
#define arquivoLeitura2 arquivo = fopen(nomedoarquivo2, "r");
#define arquivoEditar arquivo = fopen(nomedoarquivo, "a");
>>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d:codigo base/variaveis.h
=======
#define arquivoLeitura arquivo = fopen(nomedoarquivo, "r");
#define arquivoLeitura2 arquivo = fopen(nomedoarquivo2, "r");
#define arquivoLeitura3 arquivo = fopen(nomedoarquivo3, "r");
#define arquivoEditar arquivo = fopen(nomedoarquivo, "a");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
#define lerInformacoes array[elementoArray], tamanho, arquivo

int elementoArray = 0;
int tecla = 0;
char array[tamanho][tamanho];

struct informacoesLivros {
    char nome[50];
    char genero [10];
<<<<<<< HEAD
    char autor[50];
=======
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
    int emprestimo;


};

struct informacoesClientes {
    char nome2[50];
    char cpf[12];
    char telefone[11];
    char dataDeNascimento[8];
    int emprestimo;
};

struct informacoesClientes clientes[tamanho];

struct informacoesLivros livros[tamanho];

#endif
