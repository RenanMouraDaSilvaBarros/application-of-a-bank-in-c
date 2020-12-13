#include <stdio.h>
#include <stdlib.h>
#include "accountManagment.h"

void direct(int option, CurrentAccount *allAccounts)
{
    switch (option)
    {
    case 1:
        openAccount(allAccounts);
        break;
    case 2:
        deposit(allAccounts);
        break;
    case 3:
        toWithdraw(allAccounts);
        break;
    case 4:
        checkBalance(allAccounts);
        break;
    case 5:
    transfer(allAccounts);
        break;
    case 6:
        accountsLists(allAccounts);
        break;
    case 7:
        printf("Saindo.....\n");
        exit(1);
        break;
    }
}