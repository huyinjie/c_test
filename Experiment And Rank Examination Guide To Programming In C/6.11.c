//strcat
#include <stdio.h>
char *my_strcat(char *dest, const char *src)
{
    size_t i,j;
    for (i=0; dest[i]!='\0'; i++)
        ;
    for (j=0; src[j]!='\0'; j++)
        dest[i+j]=src[j];
    dest[i+j]='\0';
    return dest;
}

int main(void)
{
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    printf("%s\n",my_strcat(str1,str2));
    return 0;
}