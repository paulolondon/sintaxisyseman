#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef enum{SEP,CAD,FDT} TOKEN;
int get_token();
char buffer[128];

#endif // SCANNER_H_INCLUDED
