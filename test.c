#include <stdio.h>

int main()
{
    int nombre1, nombre2, somme;


    printf("Entrer un nombre");
    scanf("%d", &nombre1);
    printf("Entrer un nombre");
    scanf("%d", &nombre2);
    somme = nombre1 + nombre2;
    printf("La somme est egal:%d", somme);

    return 0;
}
