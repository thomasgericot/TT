
#include<string.h>
#include<stdio.h>
#define DELIMS "."
int main (int argc, char**argv){
char s[80];
char str [] = {"Je.suis.con"};
strcpy(s,str);
char *token;
token=strtok(s,DELIMS);
while(token!=NULL){
printf("%s\n",token);
token=strtok(NULL,DELIMS);
}
return 0;
}
