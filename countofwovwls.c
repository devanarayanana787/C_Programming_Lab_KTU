#include<stdio.h>

int main()
{
    char str[50];
    int i, w = 0, c = 0, s = 0;
    printf("Enter the string to search vowels, consonants, spaces, etc: ");
    gets(str);

    for (i = 0; str[i] != '$'; i++)
    {
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || 
            str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || 
            str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || 
            str[i] == 'u')
        {
            w++;
        }
        else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            c++;
        }
        else if (str[i] == ' ')
        {
            s++;
        }
    }

    printf("Number of vowels: %d\n", w);
    printf("Number of consonants: %d\n", c);
    printf("Number of spaces: %d\n", s);

    return 0;
}
