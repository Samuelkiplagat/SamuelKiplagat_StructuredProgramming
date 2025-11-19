#include <stdio.h>
#include <string.h>

int main()
{
 char name[100];


 printf("Please enter your name\n");
 fgets(name,sizeof(name),stdin);

 printf("Your name is:%s",name);

 name[strcspn(name,"\n")] ='\0' ;
  int namelength=strlen(name);

 printf("String length is:%d characters\n",namelength);

 return 0;
}
