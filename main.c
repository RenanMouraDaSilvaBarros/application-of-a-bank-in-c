#include <stdio.h>
#include <stdbool.h>
#include "menu.h"
#include "direct.h"

int main()
{
    bool isActive = true;
    int option;

    while (isActive)
    {
        menu();
        scanf("%d", &option);
        direct(option);
        printf("oiboi");
    }
}