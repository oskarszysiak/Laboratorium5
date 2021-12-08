#include <stdio.h>
#include <stdlib.h>

enum week{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

void printDayName(enum week day);


int main()
{
   printDayName(Friday);
   printDayName(Sunday);
   printDayName(18);
}


void printDayName(enum week day)
{
    switch(day)
    {
    case Monday:
        printf("pon\n");
        break;
    case Tuesday:
        printf("wt\n");
        break;
    case Wednesday:
        printf("sr\n");
        break;
    case Thursday:
        printf("czw\n");
        break;
    case Friday:
        printf("pt\n");
        break;
    default:
        printf("weekend albo cos innego\n");
    }
}
