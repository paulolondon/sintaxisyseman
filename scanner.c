#include "scanner.h"
int counter=0;
int c;
int get_token(){
while((c=getchar())!=EOF){
if(c==','){
    return SEP;}
else if(!isspace(c)){
 while(!isspace(c)){
    buffer[counter]=c;
    counter++;
 }
 buffer[0]='\0';
 return CAD;
}
else if(c==EOF){
    return FDT;
}
    }
return 0;    
}
