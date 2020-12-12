#include <stdio.h>
#include<stdbool.h>

#include "currentAccount.h"
#include "menu.h"
#include "direct.h"

int main(){
    bool isActive = true;
    int option;

    while(isActive){
        menu();
        scanf("%d", &option);
    }
}