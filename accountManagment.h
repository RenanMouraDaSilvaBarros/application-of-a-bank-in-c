
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
    pause();
    clear();
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

        if (!accountIsValidate(searchAccount))
        {
            int next;
            printf("INVÁLIDO\ndigite (2) para cancelar operacao\t");
            printf("digite (outra tecla) para insira novamente\n");
            scanf("%d", &next);
            clear();
            if (next == 2)
            {
                printf("operação cancelada!\n");
                pause();
                clear();
                return -1;
            }
        }

    } while (!accountIsValidate(searchAccount));

    clear();
    getchar();

    printf("Agencia: ");
    fgets(searAgency, 6, stdin);
    readString(searAgency, 5);
    clear();

    for (i = 0; i < size; i++)
    {
        if ((strcmp(searchAccount, allAccounts[i].account) == 0) && (strcmp(searAgency, allAccounts[i].agency) == 0))
        {
            printf("Dados da conta selecionada: \n");
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
            {
                int next;
                printf("INVÁLIDO\ndigite (2) para cancelar operacao\t");
                printf("digite (outra tecla) para insira novamente\n");
                scanf("%d", &next);
                clear();
                if (next == 2)
                {
                    printf("operação cancelada!\n");
                    pause();
                    clear();
                    return 0;
                }
            }

        } while (deposit <= 0);

        allAccounts[index].balance += deposit;
        printf("Voce depositou %0.2lf\n", deposit);
        toString(allAccounts[index]);
        pause();
        clear();
    }
}

void toWithdraw(CurrentAccount *allAccounts)
{
    clear();
    int index = search(allAccounts);

    if (index != -1)
    {
        pause();
        clear();
        double toWithdraw;
        do
        {
            printf("Valor do saque: ");
            scanf("%lf", &toWithdraw);

            if (toWithdraw <= 0 || (toWithdraw > allAccounts[index].balance))
            {
                int next;
                printf("INVÁLIDO\ndigite (2) para cancelar operacao\t");
                printf("digite (outra tecla) para insira novamente\n");
                scanf("%d", &next);
                clear();
                if (next == 2)
                {
                    printf("operação cancelada!\n");
                    pause();
                    clear();
                    return 0;
                }
            }

        } while (toWithdraw <= 0 || (toWithdraw > allAccounts[index].balance));

        allAccounts[index].balance -= toWithdraw;
        printf("Voce sacou %0.2lf\n", toWithdraw);
        toString(allAccounts[index]);
        pause();
        clear();
    }
}