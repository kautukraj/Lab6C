#include <stdio.h>
#include <stdlib.h>

 int findlen(const char * s)
 {
   int l = 0;
   while ( s[l] ) ++l;
   return l;
 }

 int main()
 {
   const char *s1 = "krishna";
   const char *s2 = "Prasad";

   int l1 = my_strlen(s1);
   int l2 = my_strlen(s2);

   char * s3 = (char *) malloc(l1 + l2 + 1); // make room for the string terminator

   int n1, n2, n3;
   n3 = 0;
   for (n1=0; n1 < l1; ++n1, ++n3)
     s3[n3] = s1[n1];

   for (n2=0; n2 < l2; ++n2, ++n3)
     s3[n3] = s2[n2];

   s3[n3] = '\0';

   printf("string 3 is %s\n", s3);

   free(s3);

   return 0;
}
