#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
  float a;
  float b;
  float c;
};

typedef struct traingleDef
{
  float a;
  float b;
  float c;
}triangleD;

float triangleCircuit(float side1, float side2, float side3);
float triangleArea(struct triangle t);

int main()
{
   struct triangle tri1;
   tri1.a=2;
   tri1.b=2;
   tri1.c=3;
   printf("traingle1: a;%.1f, b;%.1f, c;%.1f\n",tri1.a, tri1.b, tri1.c);

   triangleD tri2;
   tri2.a=2;
   tri2.b=2;
   tri2.c=3;
   printf("triangle2: a;%.1f, b;%.1f, c;%.1f\n",tri2.a, tri2.b, tri2.c);

   float return1=triangleCircuit(tri1.a, tri1.b, tri1.c);
   printf("Obwod trojkata nr 1: %f\n", return1);

   float return2=triangleArea(tri1);
   printf("Pole trojkata nr 1: %.1f\n", return2);


}

float triangleCircuit(float side1, float side2, float side3)
{
    float result=side1+side2+side3;
    return result;
}

float triangleArea(struct triangle t)
{
    float a=t.a;
    float b=t.b;
    float c=t.c;

    float p=0.5*(a+b+c);
    float result=sqrt(p*(p-a)*(p-b)*(p-c));
    return result;
}
