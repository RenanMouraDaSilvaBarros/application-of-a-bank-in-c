
#include <stdio.h>
#include <stdlib.h>
#include "currentAccount.h"
#include "utils.h"

int size = 0;

void accountsLists(CurrentAccount *allAccounts)
{
    int i = 0;
    clear();

    for (i; i < size; i++)
        toString(allAccounts[i]);
}

void openAccount(CurrentAccount *allAccounts)
{
    printf("===============ABRIR CONTA===============\n");
    printf("nome: ");
    scanf("%s", allAccounts[size].name);
    printf("agencia: ");
    scanf("%s", allAccounts[size].agency);

    allAccounts[size].account = generateaAccount();
    allAccounts[size].balance = 0;

    clear();
    printf("\nSEUS DADOS SÂO: \n");
    toString(allAccounts[size]);
    pause();
    clear();

    size++;

    getchar();
}

int search(CurrentAccount *allAccounts)
{
    char *searchAccount = (char *)malloc(7 * sizeof(char));
    char searAgency[5];
    int i = 0;
    bool isAccounnt = false;

    getchar();

    do
    {
        printf("Conta: ");
        fgets(searchAccount, 8, stdin);
        readString(searchAccount, 7);
        clear();
    } while (!accountIsValidate(searchAccount));

    getchar();

    printf("Agencia: ");
    fgets(searAgency, 6, stdin);
    readString(searAgency, 5);

    printf("\n%s %s comparacao: %d\n", allAccounts[i].account, searchAccount, strcmp(searchAccount, allAccounts[i].account));
    printf("%s %s comparacao: %d\n", allAccounts[i].agency, searAgency, strcmp(searAgency, allAccounts[i].agency));

    for (i = 0; i < size; i++)
    {
        if ((strcmp(searchAccount, allAccounts[i].account) == 0) && (strcmp(searAgency, allAccounts[i].agency) == 0))
        {
            toString(allAccounts[i]);
            return i;
        }
    }
    printf("Conta não existe!\n");
    pause();
    clear();
    return -1;
}

void deposit(CurrentAccount *allAccounts)
{

    int index = search(allAccounts);

    if (index != -1)
    {
        pause();
        clear();
        double deposit;
        do
        {
            printf("Valor do deposito: ");
            scanf("%lf", &deposit);

            if (deposit <= 0)
                printf("INVÁLIDO\n");

        } while (deposit <= 0);

        allAccounts[index].balance += deposit;
        printf("Voce depositou %0.2lf\n", deposit);
        pause();
        clear();
    }
}