/* implementing strcmp using dynamic memory allocation in C */
/* Author : Kautuk Raj */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,flag=0;
    char *p1 = (char*) malloc (255*sizeof(char)); /* allocating char pointer of size 255 to implement string */
    char *p2 = (char*) malloc (255*sizeof(char));
    scanf("%[^' '] %s",p1,p2);
    while (*(p1+i)!='\0' || *(p2+i)!='\0') /* till we reach the end of the string */
    {
        if (*(p1+i)!=*(p2+i)) /* checking if each char position element is equal or not */
        {flag=1;break;}
        i++;
    }
    printf("%d\n",flag);
    free(p1); /* freeing up the memory space allocated */
    free(p2);
    return 0;
}

