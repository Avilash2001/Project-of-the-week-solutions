#include<stdio.h>
#include<ctype.h>

void main()
{
    char str[10000];
    int i,letter_cont=0,vowels=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]==' ')
            printf("\n");
        else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (i==0 || str[i-1]==' ')
                printf("%c",toupper(str[i]));
            else
                printf("%c",str[i]);
            letter_cont++;
            if(toupper(str[i])=='A' || toupper(str[i])=='E' ||  toupper(str[i])=='I' ||  toupper(str[i])=='O' ||  toupper(str[i])=='U')
                vowels++;
        }
    }
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d",letter_cont-vowels);
}
