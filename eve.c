#include <stdio.h>

int main()
{
  
  int n,j,r,a[100],i=0;
  scanf("%d%d",&n,&r);
  for(j=n+1;j<r;j++)
  {
      if(j%2== 0)
      {
         a[i]=j;
         i++;
      }
  }
  for(j=0;j<i;j++)
  printf("%d\t",a[j]);
 return 0;
}
