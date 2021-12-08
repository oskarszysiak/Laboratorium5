#include <stdio.h>
#include <stdlib.h>
int sum(int tab[], int n);
int main()
{
    int array[]={1,2,3,6,7,9};
    int return1=sum(array, sizeof(array)/sizeof(int));
    printf("%d", return1);
}

int sum(int tab[], int n)
{
  int suma=0;
  for(int i=0; i<n; i++)
  {
      if(tab[i]%2==0||tab[i]<6)
      {
          suma=suma+tab[i];
      }
  }
  return suma;
}
