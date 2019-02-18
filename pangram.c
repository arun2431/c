#include <stdio.h>
#include<string.h>
int main()
{
   char s[1000];
   int i,t,a[26]={0},n=0;
   gets(s);
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]>='a'&&s[i]<='z')
       {
           t=s[i]-'a';
           if(a[t]<1)
           {
               a[t]=1;
               n++;
           }
       }
       else if(s[i]>='A'&&s[i]<='Z')
       {
           t=s[i]-'A';
           if(a[t]<1)
           {
               a[t]=1;
               n++;
           }
       }
   }
   if(n==26)
   printf("yes");
   else
   printf("no");

    return 0;
}
