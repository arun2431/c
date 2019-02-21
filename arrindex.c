#include <stdio.h>
 
int main(void) {
	// your code goes here
	int i,j,n,b[10],t=0,s;
	b[0]=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			b[t]=a[i];
			t++;
		}
	}

	for(i=0;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(b[i]>b[j])
			{
				s=b[i];
				b[i]=b[j];
				b[j]=s;
 
			}
		}
	}
	 if(b[0]==0)
	 printf("-1");
	 else
	 {
	for(i=0;i<t;i++)
	{
		printf("%d ",b[i]);
	}
	 }
	return 0;
}
