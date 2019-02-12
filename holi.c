#include <stdio.h>
#include<string.h>
int main()
{
  int r,b;
char a[100],c[]="Sunday",d[]="Saturday";
gets(a);
r=strcmp(a,c);
b=strcmp(a,d);
if(r==0 || b==0)
printf("yes");
else
printf("no");
return 0;
}
