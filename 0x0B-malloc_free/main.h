#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *argtostr(int ac, char **av);
char *strtow(char *str);

int **alloc_grid(int height, int width);

void free_grid(int **grid, int height);

#endif
