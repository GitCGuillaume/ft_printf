/*Use of string library function memmove*/

#include<stdio.h>
#include<string.h>
#include "libft.h"

int main()
{
   //declaring and initializing character array
   char str1[ ] = "Learn C from trytoprogram.com";
   char stra1[ ] = "Learn C from trytoprogram.com";
   char str2[ ] = "trytoprogram.com";
   char stra2[ ] = "trytoprogram.com";
   char str3[ ] = "Hello World !!!";
   char stra3[ ] = "Hello World !!!";

   //displaying str1, str2 and str3
   printf("str1 = %s\n", str1);
   printf("str2 = %s\n", str2);
   printf("str3 = %s\n", str3);

   memmove(str1, str2, 12);
   memmove(str3, &str3[6], 5);

   printf("\nAfter using memmove,\n"
          "\nstr1 = %s\n"
          "\nstr3 = %s\n", str1, str3);
	printf("\n-------------\n");
   printf("stra1 = %s\n", stra1);
   printf("stra2 = %s\n", stra2);
   printf("stra3 = %s\n", stra3);
   
   ft_memmove(stra1, stra2, 12);
   ft_memmove(stra3, &stra3[6], 5);
	printf("\nAfter using memmove,\n"
    "\nstra1 = %s\n"
    "\nstra3 = %s\n", str1, str3);
	
   return 0;
}
