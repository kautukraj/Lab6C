#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,flag=0;
    char *p1 = (char*) malloc (255*sizeof(char));
    char *p2 = (char*) malloc (255*sizeof(char));
    gets(p1);
    gets(p2);
    while (*(p1+i)!='\0' || *(p2+i)!='\0')
    {
        if (*(p1+i)!=*(p2+i))
        {flag=1;break;}
        i++;
    }
    printf("%d",flag);
    free(p1);
    free(p2);
    return 0;
}

