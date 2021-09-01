#include "scanner.h"
int counter2=0;
int c;
int get_token(){
while((c=getchar())!=EOF){
if(c==','){
    return SEP;}
else if(!isspace(c)){
 while(!isspace(c) && (c!=','))
 {
    buffer[counter2]=c;
    counter2++;
    c=getchar();
 }
    ungetc(c,stdin);            
    buffer[counter2] = '\0';
    counter2 = 0;
    return CAD;
}
}
if((c=getchar())==EOF){
    return FDT;
}
    
return 0;    
}