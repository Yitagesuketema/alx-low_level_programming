#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat -
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, len_s1, len_s2;
char *concat;
    if (!s1)
        s1="";
    if (!s2)
        s2="";
        len_s1 = strlen (*s1);
if (n >= strlen(*s2))
{
len_s2 = strlen (*s2);
concat = malloc(sizeof(char) * (len_s1 + len_s2 +1));
if (!concat)
return (NULL);
}
else 
{
    concat = malloc(sizeof(char) * (len_s1 +n));
    if (!concat)
    return (NULL);
}
for (i = 0; i < len_s1;i++)
{
*(concat + i) = *(s1+i);
}

for (i =len_s1; i < (len_s1 + len_s2); i++)
{
*(concat + i) = *(concat + i);

}

concat[len_s1 + len_s2] ='\0';
return (concat);
}

int strlen (char *str)
{
    unsigned int len = 0;
while (*str) 
len++;
return (len);
}