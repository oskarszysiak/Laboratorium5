
#include <stdio.h>
#include <stdlib.h>
#define lenName 100
#include <string.h>

enum type
{
nosale,
sale_10,
bigsale_50,
};

struct product
{
    char name[lenName];
    int value;
    int quantity;
    enum type sale;
};

void writeprod(struct product tab[], int n);
char*readsale(enum type x);
void bubblesortandprint(struct product tab[], int n);

int main()
{
    struct product tab[4];

    struct product prod0;
    strncpy(prod0.name, "Monitor LG", lenName);
    prod0.value=999;
    prod0.quantity=10;
    prod0.sale=nosale;
    memcpy(tab+0, &prod0, sizeof(struct product));


    struct product prod1;
    strncpy(prod1.name, "Podkladka pod mysz", lenName);
    prod1.value=30;
    prod1.quantity=50;
    prod1.sale=sale_10;
    memcpy(tab+1, &prod1, sizeof(struct product));

    struct product prod2;
    strncpy(prod2.name, "Lampka", lenName);
    prod2.value=50;
    prod2.quantity=20;
    prod2.sale=sale_10;
    memcpy(tab+2, &prod2, sizeof(struct product));

    struct product prod3;
    strncpy(prod3.name, "Laptop Lenovo", lenName);
    prod3.value=1500;
    prod3.quantity=5;
    prod3.sale=bigsale_50;
    memcpy(tab+3, &prod3, sizeof(struct product));

     bubblesortandprint(tab, sizeof(tab)/sizeof(struct product));
}

void writeprod(struct product tab[], int n)
{
    for(int i=0; i<n;i++)
    {
        printf("Nazwa produktu: %s\nWartosc produktu: %d\n Ilosc: %d\n Rodzaj Promocji: %s\n\n\n\n ", tab[i].name, tab[i].value, tab[i].quantity,readsale(tab[i].sale) );
    }
}

char*readsale(enum type x)
{
    switch(x)
    {
    case nosale:
        return "Brak promocji";
    case sale_10:
        return "Obnizka -10%";
    case bigsale_50:
        return "Obnizka -50%";
    }
}


void bubblesortandprint(struct product tab[], int n)
{
    struct product store;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(tab[j].value>tab[j+1].value)
            {
                store=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=store;
            }
        }
    }

        writeprod(tab, n);

}
