#include "scanner.h"

int a;
int aux=0;
int main()
{
a=get_token();
switch (a)
{
case SEP:
    printf("Separador: ,");
    break;
case CAD:
    printf("Cadena:%s",buffer);
    break;
case FDT:
    printf("Fin De Texto:");
    break;
}
return 0;
}

