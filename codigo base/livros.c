#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variaveis.h"
#include <windows.h>
#include <locale.h>

int voltarMenu()
{
    printf("Pressione enter para voltar ao menu.");
    system("pause");
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

int leituraCliente(char *nomedoarquivo)
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

        sprintf(clientes[i].nome2, "%s", array[i]);
    }

    return 0;
}

int leituraCpf(char *nomedoarquivo)
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

        sprintf(clientes[i].cpf, "%s", array[i]);
    }

    return 0;
}

int cadastrarLivro(char *nomedoarquivo)
{
    int codigo;
    char nome[50];
    fgets(nome, 50, stdin);
    fflush(stdin);

    printf("digite o nome do livro: ");
    fgets(nome, 50, stdin);
    fflush(stdin);

    arquivoEditar;

    fprintf(arquivo, "%s", nome);

    arquivoFechar;
    int sentinela = 0;
    int i = elementoArray - 1;

    while (sentinela == 0)
    {

        printf("Selecione o genero do livro\n");
        printf("[1] Romance     [2] Terror     [3] Contos\n");
        printf("[4] Biografia   [5] Autoajuda  [6] True Crime\n");
        printf("[7] Ficcao      [8] Poesia     [9] Infantil\n");
        printf("[10] Religioso  [11] Didatico  [12] Gibi\n");
        scanf("%d", &codigo);
        fflush(stdin);

        switch (codigo)
        {
        case 1:
            printf("Voce escolheu o genero Romance\n");
            livros[i].genero = 1;
            sentinela = 1;
            break;

        case 2:
            printf("Voce escolheu o genero Terror\n");
            livros[i].genero = 2;
            sentinela = 1;
            break;

        case 3:
            printf("Voce escolheu o genero Contos\n");
            livros[i].genero = 3;
            sentinela = 1;
            break;

        case 4:
            printf("Voce escolheu o genero Biografia\n");
            livros[i].genero = 4;
            sentinela = 1;
            break;

        case 5:
            printf("Voce escolheu o genero Autoajuda\n");
            livros[i].genero = 5;
            sentinela = 1;
            break;

        case 6:
            printf("Voce escolheu o genero True Crime\n");
            livros[i].genero = 6;
            sentinela = 1;
            break;

        case 7:
            printf("Voce escolheu o genero Ficcao\n");
            livros[i].genero = 7;
            sentinela = 1;
            break;

        case 8:
            printf("Voce escolheu o genero Poesia\n");
            livros[i].genero = 8;
            sentinela = 1;
            break;

        case 9:
            printf("Voce escolheu o genero Infantil\n");
            livros[i].genero = 9;
            sentinela = 1;
            break;

        case 10:
            printf("Voce escolheu o genero Religioso\n");
            livros[i].genero = 10;
            sentinela = 1;
            break;

        case 11:
            printf("Voce escolheu o genero Didatico\n");
            livros[i].genero = 11;
            sentinela = 1;
            break;

        case 12:
            printf("Voce escolheu o genero Gibi\n");
            livros[i].genero = 12;
            sentinela = 1;
            break;

        default:
            printf("Insira um codigo valido!\n");
            break;
        }
    }
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
            if (livros[i].genero == 1)
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
            if (livros[i].genero == 2)
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
            if (livros[i].genero == 3)
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
            if (livros[i].genero == 4)
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
            if (livros[i].genero == 5)
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
            if (livros[i].genero == 6)
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
            if (livros[i].genero == 7)
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
            if (livros[i].genero == 8)
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
            if (livros[i].genero == 7)
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
    return 0;
}

int menuBiblioteca()
{
    int selecao;
    printf("Selecione a opcao desejada: \n");
    printf("[1] Todos os livros \n");
    printf("[2] Generos \n");
    printf("[3] Livros empretados \n");
    printf("[4] Voltar para o Menu \n");
    scanf("%i", &tecla);
    fflush(stdin);

    switch (tecla)
    {
    case 1:
        system("cls");
        leituraNome("livros.txt");
        Biblioteca();
        break;
    case 2:
        system("cls");
        leituraNome("livros.txt");
        generos();
        break;
    case 3:
        system("cls");
        leituraNome("livros.txt");
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

int emprestimoLivro()
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
            emprestimoLivro();
        }
        if (codigo == i)
        {
            printf("\nLivro escolhido: \n");
            printf("%s", livros[i].nome);
            livros[i].emprestimo = 1;
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
                emprestimoLivro();
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