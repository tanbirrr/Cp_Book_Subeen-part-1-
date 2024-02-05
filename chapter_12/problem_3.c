#include<stdio.h>
#include<string.h>
#include<math.h>

int dec_bin(int x)
{
    int div,rem,arr[100],i=0;

    while(x)
    {
        rem=x%2; //1
        arr[i++]=rem;
        x=x/2;

    }

    for(int j=i-1; j>=0; j--)
    {
        printf("%d",arr[j]);
    }
}
int main()
{
    int decimal;

    printf("Enter the decimal number: \n");
    scanf("%d",&decimal);

    dec_bin(decimal);

    return 0;
}