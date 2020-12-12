#include <stdio.h>
#include <stdlib.h>

typedef struct currentAccount
{
    char name[50];
    char agency[10];
    int account;
    double balance;

} CurrentAccount;

CurrentAccount *toAllocate(CurrentAccount *account)
{
    return (CurrentAccount *)malloc(sizeof(CurrentAccount));
}

void toString(CurrentAccount *account)
{
    printf("==========================\n");
    printf("nome: %s\n", account->name);
    printf("agencia: %s\n", account->agency);
    printf("conta: %d\n", account->account);
    printf("saldo: %.2lf\n", account->balance);
    printf("==========================\n");
}