#ifndef MAIN_H
#define MAIN_H

/** File: Main.h
 *  Description - This file contains all the function prototypes used in this project.
 */

int _putchar (char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif