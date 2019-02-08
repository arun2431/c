#include<stdio.h>
main()
{
    int n,i,k=1;
    scanf("%d",&n);
    if(n==0)
    {printf("0");}
    else{
    for(i=1;i<=n;i++)
    {
        k=k*i;
    }
    printf("%d",k);
}}
