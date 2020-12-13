#include <stdio.h>
#include <stdbool.h>
#include "direct.h"
#include "menu.h"




int main()
{
   	CurrentAccount *allAccounts = (CurrentAccount*)malloc(500 * sizeof(CurrentAccount));

    bool isActive = true;
    int option;

    while (isActive)
    {
        menu();
        scanf("%d", &option);
        clear();
        direct(option, allAccounts);
    }
 
}