char *create_array(unsigned int size, char c);
char *_strdup(char *str);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int isSpace(char c);
int startIndex(char *s, int index);
int endIndex(char *s, int index);
int countWords(char *s)