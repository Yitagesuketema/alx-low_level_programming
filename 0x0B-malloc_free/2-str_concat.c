#include "main.h"
#include <stdlib.h>
/**
 * str_concat -concatenets two strings
 *@s1: 
 *@s2:
 *Return:
 */
char *str_concat(char *s1, char *s2)
{
    char *str_concat;
unsigned int i, j, len_1 = 0, len_2 = 0, total_len;

for (i = 0; *(s1 + i) !='\0'; i++)
    len_1++;

for (j= 0; *(s2 + j) !='\0'; j++)
    len_2++;

    total_len = len_1 + len_2 + 1 ;
str_concat=(char *)malloc(sizeof(char) * total_len);

if (str_concat == NULL)
{
return (NULL);
}

i = 0; int k = 0;
for (i = 0;i <len_1;i++)
*(str_concat + i)=*(s1 + i);

for (j =(len_1); j < (total_len -1);j++ )
*(str_concat + j)=*(s2 + j);
   
*(str_concat + total_len)='\0';
return (str_concat);

}
