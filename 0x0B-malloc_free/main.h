#ifndef MAIN_H
#define MAIN_H

void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);
int _putchar(char c);
int **alloc_grid(int width, int height);

#endif
