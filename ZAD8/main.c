#include <stdio.h>
#include <stdlib.h>
#define lenName 100
typedef struct productGroup
{
    int id;
    int value;
    int quantity;
    char name[100];
    int specialOffer;
}prod;

int main()
{
    static int idCounter=0;
    prod tab[4];
    prod p1;
    p1.id=idCounter++;
    p1.value=100;
    p1.quantity=100;
    strncpy(p1.name, "pilot do TV",lenName);
    return 0;
}
