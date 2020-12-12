
#include <stdio.h>
#include "currentAccount.h"
#include <stdlib.h>


void openAccount()
{
    CurrentAccount *account  = (CurrentAccount *)malloc(sizeof(CurrentAccount));;

    printf("===============ABRIR CONTA===============\n");
    printf("nome: ");
    scanf("%s", account->name);
    printf("agencia: ");
    scanf("%s", account->agency);
    printf("conta: ");
    scanf("%d", &account->account);
    account->balance = 0;
    toString(account);
}