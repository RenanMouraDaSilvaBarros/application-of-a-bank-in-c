#include <stdio.h>
#include <stdbool.h>
#include "menu.h"
#include "direct.h"


int main()
{
   	CurrentAccount *allAccounts = (CurrentAccount*)malloc(500 * sizeof(CurrentAccount));// alocar 500 contatos para agenda

    bool isActive = true;
    int option;

    while (isActive)
    {
        menu();
        scanf("%d", &option);
        direct(option, allAccounts);
    }
 
}