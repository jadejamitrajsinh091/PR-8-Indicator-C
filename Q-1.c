#include <stdio.h>


int main()
{
    char str[100];
    char *ptr;
    int len = 0;


    printf("Enter String:");
    scanf("%[^\n]s", str);  

    ptr = str;  

    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }

    printf("Length: %d\n",len);

    return 0;
}