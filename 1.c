#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("zero");
    }
    else if(n>0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
}
