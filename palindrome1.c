#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int i,b,k;
    printf("enter the string");
    scanf("%s",s1);

    for(i=0;s1[i]!=0;i++);

    for(b=i-1,k=0;b>=0;b--,k++)
    {
        s2[k]=s1[b];
    }

    s2[k] = '\0';

    if(strcmp(s1,s2) == 0)
    {
        printf("it is a palindrome number %s",s1);
    }

    else
    {
        printf("it is not a palindrome number %s",s1);
    }
  
}