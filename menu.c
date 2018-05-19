#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int entrada;
    setlocale(LC_ALL, "portuguese");
    do
    {
    printf("--- SALÃO DE FESTAS PATATI PATATA ---\n\nSelecione a opção desejada no menu abaixo: \n\n");
    printf("======================================================\n");
    printf("1 - Cadastrar um novo cliente\n");
    printf("2 - Cadastrar um novo funcionário\n");
    printf("3 - Cadastrar um novo fornecedor\n");
    printf("4 - Cadastrar uma nova festa\n");
    printf("5 - Calcular o valor total a ser pago por uma festa\n");
    printf("6 - Atualizar o status de pagamento de uma festa\n");
    printf("7 - Pesquisar dados (cliente, funcionário, fornecedor\n");
    printf("8 - Gerar relatório de uma festa\n");
    printf("9 - Gerar relatório de uma festa a partir da data\n");
    printf("0 - Sair do programa\n");
    printf("======================================================");
    scanf("%d", &entrada);
    switch (entrada)
    {
    case 1:
        system("pause");
        system("cls");
        cdCliente();
        break;
    case 2:
        system("pause");
        system("cls");
        cdFuncionario();
        break;
    case 3:
        system("pause");
        system("cls");
        cdFornecedor();
        break;
    case 4:
        system("pause");
        system("cls");
        cdFesta();
        break;
    case 5:
        system("pause");
        system("cls");
        calcularVPago();
        break;
    case 6:
        system("pause");
        system("cls");
        atualizarPg();
        break;
    case 7:
        system("pause");
        system("cls");
        pesquisa();
        break;
    case 8:
        system("pause");
        system("cls");
        relatorioFesta();
        break;
    case 9:
        system("pause");
        system("cls");
        relatorioBusca();
        break;
    case 0:
        printf("O programa será encerrado.");
        break;
    }
    }
    while(entrada!=0);
}
