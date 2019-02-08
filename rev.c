#include <string.h>
#include <stdio.h>

int main() {
    int i=0,j;
    char a[1000];
    gets(a);
    while(a[i]!='\0')
      i++;
    for(j=i;j>=0;j--)
    {
        printf("%c",a[j]);
    }
    
    return 0;
}
