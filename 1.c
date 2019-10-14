/* Implementation of dynamic memory allocation in C */
/* Author : Kautuk Raj */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int *p = (int*) malloc (n*sizeof(int)); /* using malloc function to allocate memory as per our needs */
    for (i=0;i<n;i++)
    {
       scanf("%d",(p+i)); /* scanning using the address of memory */
    }
    
    for (i=0;i<n;i++)
    {
        printf("%d ",*(p+i)); /* printing the value using * operation (dereferencing) */
    }
    
    free(p); /* freeing up the allocated memory space */
    return 0;
}
