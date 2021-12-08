#include <stdio.h>
#include <stdlib.h>

struct computer
{
    int index;
    char ip[16];
};
int main()
{
    struct computer comp1={1,"192.168.0.1"};
    printf("comp1: %d, %s", comp1.index, comp1.ip);
}
