#include<stdio.h>

int main()
{
    int prime[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 
    37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89,97};

    int cnt[25]={0},n,n1;

    printf("Enter the value of n: \n");
    scanf("%d",&n);
    n1=n;

    while(n)
    {
        int x=n;

        for(int i=0; i<25; i++)
        {
            if(x%prime[i] == 0)
            {
                cnt[i] +=x/prime[i];
                break;
            }
        }
        n--;
    }

    printf("%d!=",n1);
    for(int i=0; i<25; i++)
    {
        if(cnt[i]>=1)
        {
            printf("(%d,%d),",prime[i],cnt[i]);
        }
    }
    return 0;
}