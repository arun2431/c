#include <stdio.h>

int main()
{
  
  int n,j,r,re=0;
  scanf("%d",&n);
  j=n;
  while(n!=0)
    {
        r=n%10;
        re=re*10+r;
        n/=10;
    }
   
    if(j==re)
    {
        printf("yes");
    }
  else
  printf("no");
  return 0;


}
