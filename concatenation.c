#include<stdio.h>
int main()
{
    char s1[20],s2[20],s3[60];
    int i,j;

    printf("eneter the word   ");
    scanf("%s",s1);

    printf("eneter the word   ");
    scanf("%s",s2);

    for(i=0;s1[i] != '$';i++)
    {
        s3[i]=s1[i];
    }

    for(j=0;s2[j] != '$';j++)
    {
        s3[i]=s2[j];
        i++;
    }

    s3[i] = '\0';
    printf("%s",s3);
   

}