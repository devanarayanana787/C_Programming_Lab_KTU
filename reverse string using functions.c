#include<stdio.h>
#include<string.h>


void reverse(char str[])
{
    int len = strlen(str);
    int i,j=0;
    char rev[30];

    for(i=len-1;i>=0;i--)
    {
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    printf("reverse of the string===    %s",rev);


}

void main()
    {
        char s1[30];
        printf("enter the string");
        scanf("%s",s1);
        printf("entered the string",s1);
        reverse(s1);

    }
