#include<stdio.h>
#include<string.h>

int main()
{
    char word[80];
    int i,j,len,flag=1;

    scanf("%s",word);
    len=strlen(word);
    // printf("%d\n",len);

    for(i=0, j=len-1; i<len/2; i++, j--)
    {
        if(word[i] != word[j])
        {
            
            flag=0;
            break;
        }
    }
    if(flag)
    {
        printf("%s is a palindrome.\n",word);
    }
    else
    {
        printf("%s is not a palindrome\n",word);
    }

    return 0;
}