#include <stdio.h>

int main()
{
  
  int i,j,a=0,b;
  scanf("%d%d",&i,&b);
  int c[i];
  for(j=0;j<i;j++)
  {
      scanf("%d",&c[j]);
      
  }
  
  for(j=0;j<b;j++)
  {
      a=a+c[j];
      
  }
  
  printf("%d",a);
  
  return 0;


}
