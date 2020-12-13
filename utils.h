#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char *generateaAccount()
{
  char *account = (char *)malloc(7 * sizeof(char));
  char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  int i;

  for (i = 0; i < 7; i++)
  {
    account[i] = numbers[i];
  }
  for (i = 0; i < 7; i++)
    if (i == 5)
      account[i] = '-';
    else
      account[i] = numbers[rand() % 10];

  account[i] = '\0';

  return account;
}

void clear()
{

  system("clear || cls");
}

void pause()
{
  printf("insire qualquer tecla para continuar...\n");
  int c;
  scanf("%d", &c);
}

void readString(char *string, int tam)
{

  int i;
  for (i = 0; i < tam; i++)
  {

    if (string[i] == '\n')
    {
      string[i] = '\0';
    }
  }
}

bool accountIsValidate(char *account)
{
  int i;

  if ((strlen(account) == 7) && (account[5] == '-'))
  {
    
    return true;
  }

  return false;
}