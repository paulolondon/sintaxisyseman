#include "scanner.h"

int a;
int main(){
do {
a=get_token();
switch (a)
{
case SEP:
    printf("Separador: ,\n");
    break;
case CAD:
    printf("Cadena: %s\n", buffer);
    for (int counter=0; counter < 128; counter++){
                buffer[counter] = '\0';
            };
}} while (a != EOF);
printf("Fin de texto:"); 
return 0;
}


