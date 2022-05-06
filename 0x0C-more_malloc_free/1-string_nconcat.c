#include "main.h"
#include <stdlib.h>
/**
 * @brief
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    int mem_size_s2, *m;
    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";
    if (n >= strlen(s2))
    {
        mem_size_s2 = strlen(s2);
    }
    else
    {
        mem_size_s2 = n;
    }

    *m = malloc(sizeof(char) * (strlen(s1) + mem_size_s2 + 1));
    if (!m)
    {
        return (NULL);
    }
}

int strlen(char *str)
{
    int i, len = 0;
    if (str == NULL)
        return (len);

    for (i = 0; *(str + i) != '\0'; i++)
    {
        len++;
    }
    return (len);
}