#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,x,decimal,arr[100],i,sum;

    printf("Enter the decimal number: \n");
    scanf("%d",&decimal);

    n=i=sum=0;

    while(x<decimal)
    {
        x=pow(2,n);
        arr[i]=x;
        i++;
        n++;
    }
    n=n-1;
    int bin[n]={0};
    for(i=n-1; i>=0; i--)
    {
        x=pow(2,i);

        if(x <= decimal)
        {
            decimal-=x;
            bin[i]++;
        }
    }
    for(i=n-1; i>=0; i--)
    {
        printf("%d",bin[i]);
    }
    
    return 0;
} 