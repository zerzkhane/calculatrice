#include <stdio.h>
#include <stdlib.h>

int main()
{
       int K , T;
    char choix,quiter;
     printf("choissez une operation \n");
    printf("pour addition saisir +\n");
    printf("pour soustraction  saisir -\n");
    printf("pour multiplication saisir *\n");
    printf("pour division saisir /\n");
    scanf("%c", &choix);
    printf("Entrer ler nombre entier\n");
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


    case'/' :printf("%d / %d = %d\n", K,T, K / T);
    break;

    default : printf("erreur");

    }

    return 0;
}
