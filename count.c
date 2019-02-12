#include <stdio.h>

int main()
{
  
  int i,a=0;
  scanf("%d",&i);
  do{
      i=i/10;
      a++;
  }while(i!=0);
  printf("%d",a);
  
  return 0;


}
