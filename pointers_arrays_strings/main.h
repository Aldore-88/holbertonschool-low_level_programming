#ifndef MYHEADER_H
#define MYHEADER_H

int _putchar(char);
void reset_to_98(int *);
void swap_int(int *, int *);
int _strlen(char *);
void _puts(char *);
void print_rev(char *);
void rev_string(char *);
void puts2(char *);
void puts_half(char *str);
void print_array(int *, int);
char *_strcpy(char *, char *);
int _atoi(char *);

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *, int);

#endif
