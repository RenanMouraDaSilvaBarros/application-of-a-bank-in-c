
#include <stdio.h>
#include <stdlib.h>
#include "currentAccount.h"
#include "utils.h"





void openAccount()
{
    CurrentAccount *account  = (CurrentAccount *)malloc(sizeof(CurrentAccount));;
    printf("===============ABRIR CONTA===============\n");
    printf("nome: ");
    scanf("%s", account->name);
    printf("agencia: ");
    scanf("%s", account->agency);
    account->account= generateaAccount();
    account->balance = 0;
    clear();
    pause();
    clear();
    toString(account);
    pause();
    clear();
    getchar();


}