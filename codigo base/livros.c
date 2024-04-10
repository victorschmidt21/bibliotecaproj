#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variaveis.h"
#include <windows.h>
#include <locale.h>

int voltarMenu()
{
    system("cls");
    printf("Pressione enter para voltar ao menu.");
    getchar();
    menu();
}

int leituraNome(char *nomedoarquivo)
{

    elementoArray = 0;

    arquivoLeitura;

    while (fgets(lerInformacoes))
    {
        elementoArray++;
    }

    arquivoFechar;

    for (int i = 0; i < (elementoArray); i++)
    {

        sprintf(livros[i].nome, "%s", array[i]);
    }

    return 0;
}

int leituraCliente(char *nomedoarquivo2)
{

    elementoArray = 0;

    arquivoLeitura2;

    while (fgets(lerInformacoes))
    {
        elementoArray++;
    }

    arquivoFechar;

    for (int i = 0; i < (elementoArray); i++)
    {

        sprintf(clientes[i].nome2, "%s", array[i]);
    }

    return 0;
}

int leituraCpf(char *nomedoarquivo2)
{

    elementoArray = 0;

    arquivoLeitura2;

    while (fgets(lerInformacoes))
    {
        elementoArray++;
    }

    arquivoFechar;

    for (int i = 0; i < (elementoArray); i++)
    {

        sprintf(clientes[i].cpf, "%s", array[i]);
    }

    return 0;
}

int leituraGenero(char *nomedoarquivo)
{

    elementoArray = 0;

    arquivoLeitura;

    while (fgets(lerInformacoes))
    {
        elementoArray++;
    }

    arquivoFechar;

    for (int i = 0; i < (elementoArray); i++)
    {

        sprintf(livros[i].genero, "%s", array[i]);
    }

    return 0;
}

int leituraEmprestimo(char *nomedoarquivo3)
{

    elementoArray = 0;

    arquivoLeitura3;

    while (fgets(lerInformacoes))
    {
        elementoArray++;
    }

    arquivoFechar;

    for (int i = 0; i < (elementoArray); i++)
    {

        sprintf(livros[i].emprestimo, "%s", array[i]);
    }

    return 0;
}

int cadastrarLivro(char *nomedoarquivo)
{
    char nome[50];
    fgets(nome, 50, stdin);
    fflush(stdin);

    printf("digite o nome do livro: ");
    fgets(nome, 50, stdin);
    fflush(stdin);

    arquivoEditar;

    fprintf(arquivo, "%s", nome);

    arquivoFechar;
   
    return 0;
}

int cadastrarGenero(char *nomedoarquivo)
{
    char genero[10];
    fgets(genero, 10, stdin);
    fflush(stdin);

    printf("Selecione o genero do livro\n");
    printf("[1] Romance     [2] Terror     [3] Contos\n");
    printf("[4] Biografia   [5] Autoajuda  [6] True Crime\n");
    printf("[7] Ficcao      [8] Poesia     [9] Infantil\n");
    fgets(genero, 10, stdin);
    fflush(stdin);

    arquivoEditar;

    fprintf(arquivo, "%s", genero);

    arquivoFechar;
   
    printf("Livro cadastrado com sucesso!\n");
    return 0;
}

int livrosEmprestados()
{
    printf("LIVROS EMPRESTADOS\n\n");
    printf("Codigo|| Nome do Livro\n");
    for (int i = 0; i < (elementoArray); i++)
    {
        if (livros[i].emprestimo == 1)
        {
            printf("%d     || %s\n", i, livros[i].nome);
        }
        else
        {
            continue;
        }
    }
    return 0;
}

int cadastrarCliente(char *nomedoarquivo)
{

    char nome2[50];
    fgets(nome2, 50, stdin);
    fflush(stdin);

    printf("digite o nome do Cliente: \n");
    fgets(nome2, 50, stdin);
    fflush(stdin);

    arquivoEditar;

    fprintf(arquivo, "%s", nome2);

    arquivoFechar;

    return 0;
}

int cadastrarCpf(char *nomedoarquivo)
{
    char cpf[12];
    fgets(cpf, 12, stdin);
    fflush(stdin);

    printf("digite o CPF do Cliente: \n");
    fgets(cpf, 12, stdin);
    fflush(stdin);

    arquivoEditar;

    fprintf(arquivo, "%s", cpf);

    arquivoFechar;

    return 0;
}

int listaClientes()
{
    printf("Clientes:\n");
    printf("Codigo|| Nome do Cliente\n\n");
    for (int i = 0; i < (elementoArray); i++)
    {
        printf("%d     || %s\n", i, clientes[i].nome2);
    }

    return 0;
}

int generos()
{
    int codigo;
    char s1[2]="1";
    char s2[2]="2";
    char s3[2]="3";
    char s4[2]="4";
    char s5[2]="5";
    char s6[2]="6";
    char s7[2]="7";
    char s8[2]="8";
    char s9[2]="9";
    printf("GENEROS\n\n");
    printf("selecione o genero do livro\n");
    printf("[1] Romance     [2] Terror     [3] Contos\n");
    printf("[4] Biografia   [5] Autoajuda  [6] True Crime\n");
    printf("[7] Ficcao      [8] Poesia     [9] Infantil\n\n");
    scanf("%d", &codigo);
    switch (codigo)
    {
    case 1:
        printf("LIVROS DO GENERO ROMANCE:\n\n");
        printf("Codigo|| Nome do Livro\n");
        for (int i = 0; i < elementoArray; i++)
            if (strstr(livros[i].genero,s1) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;
    case 2:
        printf("LIVROS DO GENERO TERROR:\n\n");
        printf("Codigo|| Nome do Livro\n");
        for (int i = 0; i <= elementoArray; i++)
            if (strstr(livros[i].genero,s2) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;
    case 3:
        printf("LIVROS DO GENERO CONTOS:\n\n");
        printf("Codigo|| Nome do Livro\n");
        for (int i = 0; i <= elementoArray; i++)
            if (strstr(livros[i].genero,s3) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }
        break;
    case 4:
        printf("LIVROS DO GENERO BIOGRAFIA:\n\n");
        printf("Codigo|| Nome do Livro\n");
        for (int i = 0; i <= elementoArray; i++)
            if (strstr(livros[i].genero,s4) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }
        break;
    case 5:
        printf("LIVROS DO GENERO AUTOAJUDA:\n\n");
        printf("Codigo|| Nome do Livro\n");
        for (int i = 0; i <= elementoArray; i++)
            if (strstr(livros[i].genero,s5) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }
        break;
    case 6:
        printf("LIVROS DO GENERO TRUE CRIME:\n\n");
        printf("Codigo|| Nome do Livro\n");
        for (int i = 0; i <= elementoArray; i++)
            if (strstr(livros[i].genero,s6) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }
        break;
    case 7:
        printf("LIVROS DO GENERO FICCAO:\n\n");
        printf("Codigo|| Nome do Livro\n");
        for (int i = 0; i <= elementoArray; i++)
            if (strstr(livros[i].genero,s7) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }
        break;
    case 8:
        printf("LIVROS DO GENERO POESIA:\n\n");
        printf("Codigo|| Nome do Livro\n");
        for (int i = 0; i <= elementoArray; i++)
            if (strstr(livros[i].genero,s8) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }
        break;
    case 9:
        printf("LIVROS DO GENERO INFANTIL:\n\n");
        printf("Codigo|| Nome do Livro\n");
        for (int i = 0; i <= elementoArray; i++)
            if (strstr(livros[i].genero,s9) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }
        break;
    default:
        printf("Insira um codigo valido!\n");
        break;
    }
    system("pause");
    return 0;
}

int menuBiblioteca()
{
    int selecao;
    printf("Selecione a opcao desejada: \n");
    printf("[1] Todos os livros \n");
    printf("[2] Generos \n");
    printf("[3] Livros emprestados \n");
    printf("[4] Voltar para o Menu \n");
    scanf("%i", &tecla);
    fflush(stdin);

    switch (tecla)
    {
    case 1:
        system("cls");
        leituraNome("livros.txt");
        leituraGenero("genero.txt");
        Biblioteca();
        break;
    case 2:
        system("cls");
        leituraNome("livros.txt");
        leituraGenero("genero.txt");
        generos();
        break;
    case 3:
        system("cls");
        leituraNome("livros.txt");
        leituraGenero("genero.txt");
        livrosEmprestados();
        break;
    case 4:
        menu();
    default:
        printf("Codigo invalido. Tente novamente!");
        menuBiblioteca();
        break;
    }
}

int Biblioteca()
{

    printf("TODOS OS LIVROS\n\n");
    printf("Codigo|| Nome do Livro\n");

    for (int i = 0; i < (elementoArray); i++)
    {

        printf("%d     || %s \n", i, livros[i].nome);
    }

    return 0;
}

int emprestimoLivro(char*nomedoarquivo)
{
    int codigo;

    printf("EMPRESTIMO\n\n");
    printf("Digite o codigo do livro: \n");
    scanf("%d", &codigo);
    for (int i = 1; i < elementoArray; i++)
    {
        if (codigo < 0 || codigo >= elementoArray)
        {
            printf("Digite um codigo valido!\n");
            break;
        }
        if (codigo == i)
        {
        char emprestimo[50] = "1";
        fgets(emprestimo, 50, stdin);
        fflush(stdin);

        arquivoEditar;

        fprintf(arquivo, "%s", emprestimo);

        arquivoFechar;
   

        }else
        {
            continue;
        }
    }
    int sentinela = 0;

    while (sentinela == 0)
    {

        printf("Digite o codigo do Cliente: \n");
        scanf("%d", &codigo);
        for (int i = 0; i < elementoArray; i++)
        {
            if (codigo < 0 || codigo >= elementoArray)
            {
                printf("Digite um codigo valido!\n");
                break;
            }
            if (codigo == i)
            {
                printf("\nCliente escolhido: \n\n");
                printf("%s", clientes[i].nome2);
                clientes[i].emprestimo = 1;
            }
            else
            {
                continue;
            }
        }
    }
    printf("Emprestimo realizado com sucesso!!\n");
    menu();
    return 0;
}

int devolucao()
{
    int codigo;
    printf("DEVOLUCAO");
    printf("Digite o codigo do livro.");
    scanf("%i", &codigo);
    for (int i = 1; i < elementoArray; i++)
    {
        if (codigo < 0 || codigo >= elementoArray)
        {
            printf("Digite um codigo valido!\n");
            devolucao();
        }
        if (codigo == i)
        {
            printf("\nLivro devolvido: \n");
            printf("%s", livros[i].nome);
            livros[i].emprestimo = 0;
        }
        else
        {
            continue;
        }
    }
    int sentinela = 0;
    while (sentinela == 0)
    {

        printf("Digite o codigo do Cliente: \n");
        scanf("%d", &codigo);
        for (int i = 0; i < elementoArray; i++)
        {
            if (codigo < 0 || codigo >= elementoArray)
            {
                printf("Digite um codigo valido!\n");
                continue;
            }
            if (codigo == i)
            {
                printf("\nCliente devoluçao: \n\n");
                printf("%s", clientes[i].nome2);
                clientes[i].emprestimo = 0;
            }
            else
            {
                continue;
            }
        }
    }
    printf("Devolucao realizado com sucesso!!\n");
    menu();
    return 0;
}

int menu()
{
    int selecao;
    printf("Selecione a opcao desejada: \n");
    printf("[1] Biblioteca \n");
    printf("[2] Cadastrar Livro \n");
    printf("[3] Clientes Cadastrados \n");
    printf("[4] Cadastrar Clientes \n");
    printf("[5] Emprestimo de livros \n");
    printf("[6] Sair \n");
    scanf("%i", &tecla);
    fflush(stdin);
    switch (tecla)
    {
    case 1:
        system("cls");
        leituraNome("livros.txt");
        menuBiblioteca();
        voltarMenu();
        break;
    case 2:
        cadastrarLivro("livros.txt");
        cadastrarGenero("genero.txt");
        voltarMenu();
        break;
    case 3:
        system("cls");
        leituraCliente("cliente.txt");
        leituraCpf("cpf.txt");
        listaClientes();
        system("pause");
    case 4:
        cadastrarCliente("cliente.txt");
        cadastrarCpf("cpf.txt");
        voltarMenu();
    case 5:
        leituraNome("livros.txt");
        emprestimoLivro("livros.txt");
        voltarMenu();
    case 6:
        system("cls");
        exit(0);
        break;
    default:
        printf("opcao invalida \n");
        break;
    }
    return 0;
}
void inicio()
{
    setlocale(LC_ALL, "Portuguese");
    printf("\n\n   \t\t\t\t\tSEJA BEM-ViNDO A BIBLIOTECA BPK\n\n");
    printf("\t\t\t\t\tPRESSIONE ENTER PARA CONTINUAR");
    getchar();
    fflush(stdin);
    system("cls");
    menu();
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    inicio();
    return 0;
}