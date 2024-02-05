#include<stdio.h>

int main()
{
    int ara[]={3,1,5,2,4},i,j;

    for(i=0; i<5; i++)
    {
        int x=ara[i];
        for(j=i+1; j<5; j++)
        {
            if(ara[j] < x)
            {
                ara[i]=ara[j];
                ara[j]=x;
                x=ara[i];
            }
        }
    }
    for(i=0; i<5; i++)
    {
        printf("%d\n",ara[i]);
    }

    return 0;
}