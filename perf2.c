#include <stdio.h>
#include<math.h>
int main()
{
  int a,b,s,m,i,count=0;
  scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++)
  {
      s=sqrt(i);
      m=s*s;
      if(m==i)
      {
          count++;
      }
  }
  printf("%d",count);
return 0;
}
