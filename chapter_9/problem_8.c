#include<stdio.h>

int string_length(char country[])
{
//     int i=0;
//     int length=0;

//    while(country[i] != '\0')
//    {
//     length++;
//     i++;
//    }

//     return length;
       int i=0;
       while(country[i] != '\0') {
        i++;
       }
       return i;
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