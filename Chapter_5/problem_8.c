#include<stdio.h>

int main()
{
    int i,n,sum;

    scanf("%d",&n);

    for(sum=0,i=1; i<=n; i++) {
        
        sum=sum+i;
    }

    printf("Summation is %d\n",sum);

    return 0;

}