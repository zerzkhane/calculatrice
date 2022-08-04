#include <stdio.h>
#include <stdlib.h>

int main()
{
    int K , T;
    char choix, quitter;
    do
    {
    printf("choissez une operation \n");
    printf("pour addition saisir +\n");
    printf("pour soustraction  saisir -\n");
    printf("pour multiplication saisir *\n");
    printf("pour division saisir /\n");
    scanf("%c", &choix);
    printf("Entrer ler nombre \n");
    scanf("%d", &K);
    printf("Entrer le 2eme nombre\n");
    scanf("%d", &T);

       switch (choix)
        {

        case '+' : printf("%d + %d = %d\n", K,T, K + T);
        break;

        case'-' :printf("%d - %d = %d\n", K,T, K - T);
        break;

        case'*' :printf("%d * %d = %d\n", K,T, K * T);
        break;

        case'/' : if (T!= 0){
                    printf("%d / %d = %d \n", K,T, K / T);
                  }
                  else if (T == 0){
                    printf("choix incorrect\n");
                  }
        break;

        printf("pour quitter tapez q\n");
        default : printf("erreur\n");
        }

      }
        while(quitter != "q");


    return 0;
}
