#include<stdio.h>

int string_length(char country[])
{
    int i,length=0;

    for(i=0; country[i] != '\0'; i++ ) {
        length++;
    }

    return length;
}

int main()
{
    char country[100];
    int length;

    while(1==scanf("%s",country)) {
        length=string_length(country);
        printf("length is %d\n",length);
    }

    return 0;
}