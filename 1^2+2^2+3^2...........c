#include<stdio.h>
void main()
{
    int i, n,s=0;
    printf("enter the last number of the series:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i*i;
        printf("%d\n",s);

    }



}
