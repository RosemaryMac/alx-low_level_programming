#define MAIN_H
/**
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x06-pointers_arrays_strings directory.
 */
void print_buffer(char *b, int size);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_number(int n);
char *rot13(char *s);
char *leet(char *);
char *cap_string(char *str);
char *string_toupper(char *s);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *add_strings(char *n1, char *n2, char *r, int r_index);
int _putchar(char c);
