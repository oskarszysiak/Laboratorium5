#include <stdio.h>
#include <stdlib.h>
float pole(float a, float b);
float obwod(float a, float b);
int main()
{
    float return1=pole(2, 1);
    float return2=obwod(2, 1);
    printf("pole=%f, obwod=%f\n", return1, return2);
}
float pole(float a, float b)
{
    float p=a*b;
    return p;
}

float obwod(float a, float b)
{
    float o=2*a+2*b;
    return o;
}
