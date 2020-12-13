#include <stdio.h>
#include "accountManagment.h"



void direct(int option, CurrentAccount *allAccounts){
    switch(option){
        case 1:
        openAccount(allAccounts);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            accountsLists(allAccounts);
            break;
        case 7:
            break;
    }

}