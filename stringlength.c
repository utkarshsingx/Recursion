#include <stdio.h>
 
int stringLength(char *str)
{
    static int length=0;
    if(*str!=NULL)
    {
        length++;
        stringLength(++str);
    }
    else
    {
        return length;
    }
}
int main()
{
    char str[100];
    int length=0;
     
    printf("Enter a string: ");
    gets(str);
     
    length=stringLength(str);
     
    printf("Total number of characters (string length) are: %d\n",length);
 
    return 0;
}