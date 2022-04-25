#include "main.h"
/**
 * @brief 
 * 
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i,j,success=0;
   
for(i = 0; *(s + i)!='\0'; i++)
{
for (j = 0; *(accept + j) != '\0';j++)
{
if (*(s + i) == *(accept + j))
{
return(s + i);
goto search_end;
success=1;
}
search_end:
break;
if (success == 0)
return ('\0');
}
 







}
}