# 0x0B.C-malloc_free
## Read or Watch:
- **0x0a - malloc & free - quick overview.pdf**

- **Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)**

man or help:

- *malloc*

- *free*
## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- What is the difference between automatic and dynamic allocation

- What is *malloc* and *free* and how to use them

- Why and when use *malloc*

- How to use **valgrind** to check for memory leak
## Requirements
- Allowed editors: **vi, vim, emacs**

- All your files will be compiled on **Ubuntu 20.04 LTS** using *gcc*, using the options *-Wall -Werror -Wextra -pedantic -std=gnu89*

- All your files should end with a new line

- A **README.md** file, at the root of the folder of the project is mandatory

- Your code should use the *Betty* style. It will be checked using *betty-style.pl* and *betty-doc.pl*

- You are not allowed to use global variables

- No more than 5 functions per file
## Tasks
## 0. Float like a butterfly, sting like a bee
Write a function that creates an array of chars, and initializes it with a specific char.

- Prototype:__char *create_array(unsigned int size, char c);__

- Returns NULL if size = 0

- Returns a pointer to the array, or NULL if it fails
## 1. The woman who has no imagination has no wings
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- Prototype:__char *_strdup(char *str);__

- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.

- Returns NULL if str = NULL

- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.
## 2. He who is not courageous enough to take risks will accomplish nothing in life
Write a function that concatenates two strings.

- Prototype:__char *str_concat(char *s1, char *s2);__

- The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated

- if NULL is passed, treat it as an empty string

- The function should return NULL on failure
## 3. If you even dream of beating me you'd better wake up and apologize
Write a function that returns a pointer to a 2 dimensional array of integers.

- Prototype:__int **alloc_grid(int width, int height);__

- Each element of the grid should be initialized to 0

- The function should return NULL on failure

- If width or height is 0 or negative, return *NULL*
## 4. It's not bragging if you can back it up
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

- Prototype:__void free_grid(int **grid, int height);__

- Note that we will compile with your **alloc_grid.c** file. Make sure it compiles.
## 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
Write a function that concatenates all the arguments of your program.

- Prototype:__char *argstostr(int ac, char **av);__

- Returns NULL if **ac == 0** or **av == NULL**

- Returns a pointer to a new string, or NULL if it fails

- Each argument should be followed by a \n in the new string
## 6. I will show you how great I am
Write a function that splits a string into words.

- Prototype:__char **strtow(char *str);__

- The function returns a pointer to an array of strings (words)

- Each element of this array should contain a single word, null-terminated

- The last element of the returned array should be NULL

- Words are separated by spaces

- Returns NULL if **str == NULL** or str == ""

- If your function fails, it should return *NULL*
