/**
 * create_array - creates an array of chars.
 * @size: size of array to allocate
 * @c: character to be allocated
 * Return: Null else return allocated memory.
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
else
{
char *str = (char *)calloc(size, sizeof(c));
if (*str)
{
*str = "A";
return (*str);
}
else
return (NULL);
}
