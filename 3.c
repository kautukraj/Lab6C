/* implementing strcat using dynamic memory allocation in C */
/* Author : Kautuk Raj */
#include <stdio.h>
#include <stdlib.h>

int my_own_strlen(char* p) /* implementing a function to find the length of string passed into it */
{
    int l = 0;
    while (p[l])
        ++l;
    return l; /* returning length */
}

int main()
{
    int i =0, j = 0, k = 0;
    char* p1 = (char*)malloc(255 * sizeof(char)); /* allocating a size of 255 to char pointer */
    char* p2 = (char*)malloc(255 * sizeof(char));
    scanf("%[^' '] %s", p1, p2); /* reading formatted input from console */
    int l1 = my_own_strlen(p1); /* finding length of string */
    int l2 = my_own_strlen(p2);
    char* p3 = (char*)malloc(l1 + l2 + 1); /* allocating memory to new char pointer to store the concatenated string*/

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
    p3[k] = '\0'; /* adding a null to the end of the concatenated string */

    printf("%s\n", p3);
    free(p1);
    free(p2);
    free(p3); /* freeing up the allocated memory */
    return 0;
}
// i am trying to add something
