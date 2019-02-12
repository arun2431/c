#include <stdio.h>

int main()
{
  
  int n,j,r;
  scanf("%d%d",&n,&r);
  for(j=n+1;j<r;j++)
  {
      if(j%2!= 0)
      {
          printf("%d\t",j);
      }
  }
  
 return 0;
}
