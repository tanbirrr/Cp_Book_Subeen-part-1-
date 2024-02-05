#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int remainder=n-(2*(n/2));

    if(remainder==0) {
        printf("The number is even\n");
    }

    else {
        printf("The number is odd\n");
    }

    return 0;
}