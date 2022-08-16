#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) 
{
int Player, Computer;
srand (time(NULL));
Computer = rand() % 3;

char op = 's';

while (op == 's' || op == 'S')
  {
  printf("Olá jogador, pronto para se divertir");
  printf("\nEspero que sim, let`s go");
  printf("Por gentileza digame um nuero entre <0 - 1 - 2>: ");
  scanf("%d", &Player);

  printf("\nJogada do PC: %d\n", Computer);

   if (Player == 0 && Computer == 0)
        {
            printf("\nEMPATE");
            printf("\nDeseja continuar <s/S>: ");
            scanf("%s", &op);
        }
      else if (Player == 1 && Computer == 1)
        {
            printf("\nEMPATE");
            printf("\nDeseja continuar <s/S>: ");
            scanf("%s", &op);
        }
      else if (Player == 2 && Computer == 2)
        {
            printf("\nEMPATE");
            printf("\nDeseja continuar <s/S>: ");
            scanf("%s", &op);
        }
      else if (Player == 0 && Computer == 1)
        {
            printf("\nPC VENCEU");
            printf("\nDeseja continuar <s/S>: ");
            scanf("%s", &op);
        }
      else if (Player == 0 && Computer == 2)
        {
            printf("\nJOGADOR VENCEU");
            printf("\nDeseja continuar <s/S>: ");
            scanf("%s", &op);
        }
      else if (Player == 1 && Computer == 2)
        {
            printf("\nPC VENCEU");
            printf("\nDeseja continuar <s/S>: ");
            scanf("%s", &op);            
        }
      else if (Player == 1 && Computer == 0)
        {
            printf("\nJOGADOR VENCEU");
            printf("\nDeseja continuar <s/S>: ");
            scanf("%s", &op);
        }
      else if (Player == 2 && Computer == 1)
      {
            printf("\nJOGADOR VENCEU");
            printf("\nDeseja continuar <s/S>: ");
            scanf("%s", &op);
        }
      else if (Player == 2 && Computer == 0)
      {
            printf("\nPC VENCEU");
            printf("\nDeseja continuar <s/S>: ");
            scanf("%s", &op);
      }
      else  
      {
            printf("\nOPÇÃO INVÁLIDA");
            printf("\nDeseja continuar <s/S>: ");
            scanf("%s", &op);
      }      
  }
  return 0;
}
