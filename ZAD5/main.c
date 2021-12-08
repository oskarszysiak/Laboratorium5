#include <stdio.h>
#include <stdlib.h>

void read(enum connetion status);
void info(struct computer c);

enum connection
{
connection_established,
connection_not_established,
connection_in_progress,
};

struct computer
{
char computerName[100];
enum connection connectionStatus;
char ip [16];
};

int main()
{
struct computer comp1;
strncpy(comp1.computerName,"OskarKomputer", 100);
comp1.connectionStatus=connection_in_progress;
strncpy(comp1.ip, "125.168.000.001",16);

infoaboutcomp(comp1);
}

char * readstatus(enum connection status)
{
    switch(status)
    {
    case connection_established:
       return "polaczenie nawiazane";
    case connection_not_established:
        return "polaczenie nienawiazne";
    case connection_in_progress:
        return "polaczenie w trakcie";
    }
}

void infoaboutcomp(struct computer c)
{
    printf(" Nazwa komputera: %s\n IP: %s\n Status polaczenia: %s", c.computerName,c.ip,readstatus(c.connectionStatus));
}
