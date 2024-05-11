#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variaveis.h"
#include <windows.h>
#include <locale.h>

int voltarMenu()
{
<<<<<<< HEAD
    system("cls");
    printf("Pressione enter para voltar ao menu.");
    getchar();
=======
    printf("Pressione enter para voltar ao menu.\n");
    getchar();
    system("cls");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
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
<<<<<<< HEAD
    fflush(stdin);

=======
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
    printf("digite o nome do livro: ");
    fgets(nome, 50, stdin);
    fflush(stdin);

    arquivoEditar;

<<<<<<< HEAD
    fwrite(nome, sizeof(nome), 1, arquivo);

    arquivoFechar;
   
=======
    fprintf(arquivo, "%s", nome);

    arquivoFechar;

>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
    return 0;
}

int cadastrarGenero(char *nomedoarquivo)
{
    char genero[10];
    fgets(genero, 10, stdin);
<<<<<<< HEAD
    fflush(stdin);

=======
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
    printf("Selecione o genero do livro\n");
    printf("[1] Romance     [2] Terror     [3] Contos\n");
    printf("[4] Biografia   [5] Autoajuda  [6] True Crime\n");
    printf("[7] Ficcao      [8] Poesia     [9] Infantil\n");
    fgets(genero, 10, stdin);
    fflush(stdin);

    arquivoEditar;

    fprintf(arquivo, "%s", genero);

    arquivoFechar;
<<<<<<< HEAD
   
=======

>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
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
<<<<<<< HEAD
    fflush(stdin);

=======
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
    printf("digite o nome do Cliente: \n");
    fgets(nome2, 50, stdin);
    fflush(stdin);

    arquivoEditar;

<<<<<<< HEAD
    fwrite(nome2, sizeof(nome2), 1, arquivo);
=======
    fprintf(arquivo, "%s", nome2);
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d

    arquivoFechar;

    return 0;
}

int cadastrarCpf(char *nomedoarquivo)
{
    char cpf[12];
<<<<<<< HEAD
=======
    fgets(cpf, 50, stdin);
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
    fgets(cpf, 12, stdin);
    fflush(stdin);

    printf("digite o CPF do Cliente: \n");
    fgets(cpf, 12, stdin);
    fflush(stdin);

    arquivoEditar;

<<<<<<< HEAD
    fwrite(cpf, sizeof(cpf), 1, arquivo);
=======
    fprintf(arquivo, "%s", cpf);
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d

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
<<<<<<< HEAD
    char s1[2]="1";
    char s2[2]="2";
    char s3[2]="3";
    char s4[2]="4";
    char s5[2]="5";
    char s6[2]="6";
    char s7[2]="7";
    char s8[2]="8";
    char s9[2]="9";
=======
    char s1[2] = "1";
    char s2[2] = "2";
    char s3[2] = "3";
    char s4[2] = "4";
    char s5[2] = "5";
    char s6[2] = "6";
    char s7[2] = "7";
    char s8[2] = "8";
    char s9[2] = "9";
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
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
<<<<<<< HEAD
            if (strstr(livros[i].genero,s1) != NULL)
=======
            if (strstr(livros[i].genero, s1) != NULL)
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
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
<<<<<<< HEAD
            if (strstr(livros[i].genero,s2) != NULL)
=======
            if (strstr(livros[i].genero, s2) != NULL)
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
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
<<<<<<< HEAD
            if (strstr(livros[i].genero,s3) != NULL)
=======
            if (strstr(livros[i].genero, s3) != NULL)
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
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
<<<<<<< HEAD
            if (strstr(livros[i].genero,s4) != NULL)
=======
            if (strstr(livros[i].genero, s4) != NULL)
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
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
<<<<<<< HEAD
            if (strstr(livros[i].genero,s5) != NULL)
=======
            if (strstr(livros[i].genero, s5) != NULL)
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
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
<<<<<<< HEAD
            if (strstr(livros[i].genero,s6) != NULL)
=======
            if (strstr(livros[i].genero, s6) != NULL)
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
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
<<<<<<< HEAD
            if (strstr(livros[i].genero,s7) != NULL)
=======
            if (strstr(livros[i].genero, s7) != NULL)
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
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
<<<<<<< HEAD
            if (strstr(livros[i].genero,s8) != NULL)
=======
            if (strstr(livros[i].genero, s8) != NULL)
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
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
<<<<<<< HEAD
            if (strstr(livros[i].genero,s9) != NULL)
=======
            if (strstr(livros[i].genero, s9) != NULL)
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
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
<<<<<<< HEAD
    }

    return 0;
}

int emprestimoLivro(char*nomedoarquivo)
=======

    }
    return 0;
}

int emprestimoLivro()
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
{
    int codigo;

    printf("EMPRESTIMO\n\n");
    int sentinela = 0;
    while (sentinela == 0)
    {

        printf("Digite o codigo do livro: \n");
        scanf("%d", &codigo);
        for (int i = 1; i < elementoArray; i++)
        {
<<<<<<< HEAD
<<<<<<<< HEAD:bibliotecaproj/codigo base/livros.c
=======
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d

            if (livros[codigo].emprestimo == 1)
            {
                printf("O livro %s ja esta emprestado.", livros[codigo].nome);
                int condicao = 0;
                printf("(1)Tentar novamente              (2)Voltar ao menu");
                scanf("%i", &condicao);
                fflush(stdin);
                if (condicao == 1)
                {
                    break;
                }
                else
                {
                    menu();
                }
            }
            if (codigo < 0 || codigo >= elementoArray)
            {
                printf("Digite um codigo valido!\n");
                break;
            }
            if (codigo == i)
            {
                printf("\nLivro escolhido: \n");
                printf("%s", livros[i].nome);
                livros[i].emprestimo = 1;
                sentinela = 1;
                break;
            }
<<<<<<< HEAD
========
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
>>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d:codigo base/livros.c
=======
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
        }
    }
    int sentinela2 = 0;

    while (sentinela2 == 0)
    {

        printf("Digite o codigo do Cliente: \n");
        scanf("%d", &codigo);
        for (int i = 0; i < elementoArray; i++)
        {
            if (clientes[codigo].emprestimo == 1)
            {
                printf("O cliente ");
                printf("%s ja possui um emprestimo.", clientes[codigo].nome2);
                int condicao = 0;
                printf("(1)Tentar novamente              (2)Voltar ao menu\n");
                scanf("%i", &condicao);
                fflush(stdin);
                if (condicao == 1)
                {
                    break;
                }
                else
                {
                    menu();
                }
            }
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
                sentinela2 = 1;
                break;
            }
        }
    }
<<<<<<< HEAD
    printf("Emprestimo realizado com sucesso!!\n");
=======
    printf("Empréstimo realizado com sucesso!!\n");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
    menu();
    return 0;
}

int devolucao()
{
    int codigo;
<<<<<<< HEAD
    printf("\nDEVOLUCAO\n");
=======
    printf("\nDEVOLUÇÃO\n");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d

    int sentinela = 0;
    while (sentinela == 0)
    {
<<<<<<< HEAD

        printf("Digite o codigo do livro.\n");
=======
        printf("Digite o código do livro.\n");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
        scanf("%i", &codigo);
        for (int i = 1; i < elementoArray; i++)
        {
            if (livros[codigo].emprestimo == 0)
            {
                int condicao2 = 0;
                printf("O livro ");
<<<<<<< HEAD
                printf("%s nao esta emprestado.\n", livros[codigo].nome);
=======
                printf("%s não esta emprestado.\n", livros[codigo].nome);
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
                printf("(1)Tentar novamente              (2)Voltar ao menu\n");
                scanf("%i", &condicao2);
                fflush(stdin);
                if (condicao2 == 1)
                {
                    break;
                }
                else
                {
                    menu();
                }
            }

            if (codigo < 0 || codigo >= elementoArray)
            {
<<<<<<< HEAD
                printf("Digite um codigo valido!\n");
=======
                printf("Digite um código válido!\n");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
                break;
            }
            if (codigo == i)
            {
                printf("\nLivro devolvido: ");
                printf("%s", livros[i].nome);
                livros[i].emprestimo = 0;
                sentinela = 1;
                break;
            }
        }
    }
    int sentinela2 = 0;
    while (sentinela2 == 0)
    {

<<<<<<< HEAD
        printf("Digite o codigo do Cliente: \n");
        scanf("%d", &codigo);
        for (int i = 0; i < elementoArray; i++)
        {
            if (clientes[codigo].emprestimo == 0)
            {
                int condicao = 0;
                printf("O cliente ");
                printf("%s nao possui emprestimo.\n", clientes[codigo].nome2);
                printf("(1)Tentar novamente              (2)Voltar ao menu");
=======
        printf("Digite o código do Cliente: \n");
        scanf("%d", &codigo);
        for (int i = 0; i < elementoArray; i++)
        {
            if (clientes[i].emprestimo == 0)
            {
                int condicao = 0;
                printf("O cliente %s não possui empréstimo.\n", clientes[i].nome2);
                printf("[1]Tentar novamente              [2]Voltar ao menu\n");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
                scanf("%i", &condicao);
                fflush(stdin);
                if (condicao == 1)
                {
                    break;
                }
                else
                {
                    menu();
                }
            }
            if (codigo < 0 || codigo >= elementoArray)
            {
<<<<<<< HEAD
                printf("Digite um codigo valido!\n");
=======
                printf("Digite um código válido!\n");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
                break;
            }
            if (codigo == i)
            {
<<<<<<< HEAD
                printf("\nCliente devolucao: ");
=======
                printf("\nCliente devolução: ");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
                printf("%s\n", clientes[i].nome2);
                clientes[i].emprestimo = 0;
                sentinela2 = 1;
                break;
            }
        }
<<<<<<< HEAD
    }
    printf("Devolucao realizado com sucesso!!\n");
    menu();
    return 0;
=======
        printf("Devolução realizado com sucesso!!\n");
        menu();
        return 0;
    }
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
}

int menu()
{
<<<<<<< HEAD
    int selecao;
    printf("Selecione a opcao desejada: \n");
=======
    system("cls");
    printf("Selecione a opção desejada: \n");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
    printf("[1] Biblioteca \n");
    printf("[2] Cadastrar Livro \n");
    printf("[3] Clientes Cadastrados \n");
    printf("[4] Cadastrar Clientes \n");
<<<<<<< HEAD
    printf("[5] Emprestimo de livros \n");
    printf("[6] Devolucao de livros \n");
=======
    printf("[5] Empréstimo de livros \n");
    printf("[6] Devolução de livros \n");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
    printf("[7] Sair \n");
    scanf("%i", &tecla);
    fflush(stdin);
    switch (tecla)
    {
    case 1:
        system("cls");
<<<<<<< HEAD
        leituraNome("livros.dat");
=======
        leituraNome("livros.txt");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
        menuBiblioteca();
        voltarMenu();
        break;
    case 2:
<<<<<<< HEAD
<<<<<<<< HEAD:bibliotecaproj/codigo base/livros.c
        cadastrarLivro("livros.dat");
========
        cadastrarLivro("livros.txt");
        cadastrarGenero("genero.txt");
>>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d:codigo base/livros.c
=======
        cadastrarLivro("livros.txt");
        cadastrarGenero("genero.txt");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
        voltarMenu();
        break;
    case 3:
        system("cls");
<<<<<<< HEAD
        leituraCliente("cliente.dat");
        leituraCpf("cpf.txt");
        listaClientes();
        system("pause");
        break;
    case 4:
        cadastrarCliente("cliente.dat");
        cadastrarCpf("cpf.txt");
        voltarMenu();
        break;
    case 5:
        leituraNome("livros.dat");
        emprestimoLivro("livros.dat");
        voltarMenu();
        break;
    case 6:
        leituraNome("livros.dat");
        devolucao("livros.dat");
        voltarMenu();
        break;

    case 7:
        system("cls");
        printf("SISTEMA ENCERRADO");
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
=======
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
        leituraCliente("cliente.txt");
        emprestimoLivro("livros.txt");
        voltarMenu();
    case 6:
        leituraNome("livros.txt");
        leituraCliente("cliente.txt");
        devolucao("livros.txt");
        voltarMenu();

    case 7:
        system("cls");
        printf("SISTEMA ENCERRADO!");
        exit(0);
        break;
    default:
        system("cls");
        printf("Opção inválida \n\n");
        menu();
        break;

        return 0;
    }
}
void inicio()
{
    printf("\n\n   \t\t\t\t\tSEJA BEM-VINDO A BIBLIOTECA BPK\n\n");
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
    printf("\t\t\t\t\tPRESSIONE ENTER PARA CONTINUAR");
    getchar();
    fflush(stdin);
    system("cls");
    menu();
}

int main()
{
<<<<<<< HEAD
    setlocale(LC_ALL, "Portuguese");
=======
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
>>>>>>> 5ec7d0461f394cd96f5f25b3b452014903368a8d
    inicio();
    return 0;
}