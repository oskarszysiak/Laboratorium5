#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct date{
int day;
int month;
int year;
char name[30];
};

struct date nextday(struct date x);
void writedate(struct date x);
int differencedates(struct date x, struct date y);


int main()
{
   struct date date1;
   date1.day=11;
   date1.month=12;
   date1.year=2021;
   strncpy(date1.name, "kalendarz gregorianski", 30);
    printf("Data 1 to %d.%d.%d w rodzaju kalendarza: %s\n",date1.day, date1.month, date1.year, date1.name);
   struct date dater1=nextday(date1);
   printf("Nastepny dzien bedzie mial date %d.%d.%d w rodzaju kalendarza:%s \n",dater1.day, dater1.month, dater1.year, dater1.name);
   writedate(date1);

   struct date date2;
   date2.day=30;
   date2.month=11;
   date2.year=2021;
   strncpy(date2.name, "kalendarz gregorianski", 30);

   struct date date3;
   date3.day=30;
   date3.month=12;
   date3.year=2021;
   strncpy(date3.name, "kalendarz gregorianski", 30);

   struct date dater2=nextday(date2);
   struct date dater3=nextday(date3);

   writedate(dater2);
   writedate(dater3);

}

struct date nextday(struct date x)
{
 x.day++;
 if(x.day>30)
 {
     x.day=1;
     x.month++;
     if(x.month>12)
     {
         x.month=1;
         x.year++;
     }
 }


 return x;
}

void writedate(struct date x)
{
    printf("Data to %d.%d.%d w rodzaju kalendarza: %s\n",x.day, x.month, x.year, x.name);
}

int differencedates(struct date x, struct date y)
{
    int howmanydays1=(x.year-1)*30*12+(x.month-1)*30+x.day;
    int howmanydays2=(y.year-1)*30*12+(y.month-1)*30+y.day;
    if(howmanydays1>howmanydays2)
    {
        return howmanydays1-howmanydays2;
    }
    else if(howmanydays2>howmanydays1)
    {
        return howmanydays2-howmanydays1;
    }
    else
    return 0;
}

