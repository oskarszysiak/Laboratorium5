#include <stdio.h>
#include <stdlib.h>
struct struct1
{
    int p1;
    float p2;
    char p3[20];
};

union union1
{
    int p4;
    float p5;
    char p6[20];
};

struct struct2
{
    int p7;
    float p8;
    union
    {
        int p9;
        float p10;
        double p11;
    };
};

int main()
{
    struct struct1 str1;
    str1.p1=12;
    str1.p2=20.2;
    strncpy(str1.p3, "OskarSzysiak",20);
    printf("Rozmair struktury1: %d\n", sizeof(str1)); // wypisuje 28 czyli 20 znaków * 1bajt 1 int*4 bajty i 1 float*4 bajty

    union union1 uni1;
    uni1.p4=12;
    uni1.p5=20.2;
    strncpy(uni1.p6, "OskarSzysiak",20);
    printf("Rozmiar unii1: %d\n", sizeof(uni1)); //wypisuje 20 czyli najwiekszy rozmiar w unii tablica 20 znakow *1 bajt

    struct struct2 str2;
    str2.p7=1;
    str2.p8=2.1;
    str2.p9=3;
    str2.p10=20.5;
    str2.p11=20.52;
    printf("Rozmiar struktury2(z zagniezdzona unia):%d\n", sizeof(str2));// wypisuje czyli 1 int*4 bajty 1 float czyli 4 bajty i 1 double(jako najwiekszy romziar w unii) czyli 8 bajtow

}

