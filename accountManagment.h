
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