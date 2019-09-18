#include <stdio.h>
#include <stdlib.h>

int my_own_strlen(char* p)
{
    int l = 0;
    while (p[l])
        ++l;
    return l;
}

int main()
{
    int i = 0, flag = 0;
    int j = 0, k = 0;
    char* p1 = (char*)malloc(255 * sizeof(char));
    char* p2 = (char*)malloc(255 * sizeof(char));
    scanf("%[^' '] %s", p1, p2);
    int l1 = my_own_strlen(p1);
    int l2 = my_own_strlen(p2);
    char* p3 = (char*)malloc(l1 + l2 + 1);

    while (i < l1)
    {
        p3[k] = p1[i];
        k++;
        i++;
    }

    while (j < l2)
    {
        p3[k] = p2[j];
        k++;
        j++;
    }
    p3[k] = '\0';

    printf("%s\n", p3);
    free(p1);
    free(p2);
    free(p3);
    return 0;
}

