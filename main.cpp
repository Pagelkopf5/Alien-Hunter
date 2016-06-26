#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;

int main()
{
    int municao=5;
    int adversario=0;
    int tiro=0;
    srand(time(NULL));
    adversario = rand() % 100;

    do{
        printf("Aonde vc vai atirar(1-100)? ");
        scanf("%i", &tiro);
        if (tiro<adversario){
            printf("Ele esta para a direita. \n");
        }
        else{
            if(tiro>adversario){
               printf("Ele esta para a esquerda. \n");
            }
        }
        if(tiro==adversario){
            printf("Voce conseguiu matar seu adversario.\n\n");
            return 0;
        }
        municao--;
    }while( municao>0);

    printf("voce ficou sem municao e foi morto em batalha.\n\n");
}
