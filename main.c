#include <stdio.h>
#include <stdbool.h>
#include "menu.h"
#include "direct.h"


int main()
{
   	CurrentAccount *allAccounts = (CurrentAccount*)malloc(500 * sizeof(CurrentAccount));

    bool isActive = true;
    int option;

    while (isActive)
    {
        menu();
        scanf("%d", &option);
        direct(option, allAccounts);
    }
 
}