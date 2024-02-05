#include<stdio.h>
#include<string.h>

int string_length(char str[])
{
    int i=0;

    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

int string_compare(char a[], char b[])
{
    int i;

    for(i=0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if(a[i] < b[i]) return -1;
        if(a[i] > b[i]) return 1;
    }
    if(string_length(a) == string_length(b)) return 0;

    if(string_length(a) < string_length(b)) return -1;

    if(string_length(a) > string_length(b)) return 1;
}




int main()
{

     char a1[100],a2[100];

    // printf("Enter first string: \n");
    // gets(a1);
    // printf("Enter the second string: \n");
    // gets(a2);
    printf("Enter first string: \n");
    fgets(a1, sizeof(a1), stdin);
    printf("Enter the second string: \n");
    fgets(a2, sizeof(a2), stdin);

    a1[strcspn(a1, "\n")] = '\0';
    a2[strcspn(a2, "\n")] = '\0';

    int x=string_compare(a1,a2);

    if(x==0)
    {
        printf("%s and %s both are same length\n\n",a1,a2);
    }
    else if(x==1) {
        printf("%s is greater than %s\n\n",a1,a2);
    }
    else {
        printf("%s is less than %s\n\n",a1,a2);
    }


    return 0;
}

//a1[strcspn(a1, "\n")] ='\0';
//a2[strcspn(a2, "\n")] ='\0'