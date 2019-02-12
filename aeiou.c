#include <stdio.h>

int main()
{
   char a;
   scanf("%c",&a);
   if(a>='a' && a<='z')
   {
   if(a=='a')
   printf("Vowel");
   else if(a=='e')
   printf("Vowel");
   else if(a=='i')
   printf("Vowel");
   else if(a=='o')
   printf("Vowel");
   else if(a=='u')
   printf("Vowel");
   else
   printf("Consonant");
   }
   else
   printf("Invalid");
    return 0;
}
