# 0x12. C - Singly linked lists
## Concepts
For this project, we expect you to look at this concept:
- **Data Structures**
- References (Read deep into either for explanations of common data structures):
- [Tutorials Point](https://www.tutorialspoint.com/data_structures_algorithms/data_structures_basics.htm)
- [Geeks for Geeks](https://www.geeksforgeeks.org/data-structures/)
How to Select the Appropriate Data Structure:
- [Career Drill](https://www.careerdrill.com/blog/coding-interview/choosing-the-right-data-structure-to-solve-problems/)
## Resources
- [*Linked Lists*](https://www.youtube.com/watch?v=udapt4FGY20&t=130s)
- [*Google*](https://www.google.com/#q=linked+lists)
- [*Youtube*](https://www.youtube.com/results?search_query=linked+lists)
## Learning Objectives
At the end of this project, you are expected to be able to [*explain to anyone*](https://fs.blog/feynman-learning-technique/),*without the help of Google:*

- When and why using linked lists vs arrays

- How to build and use linked lists
# More Info
Please use this data structure for this project:
~~~~
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;

    unsigned int len;

    struct list_s *next;

} list_t;
~~~~
## Tasks
## [0. Print list](0-print_list.c)
Write a function that prints all the elements of a list_t list.
- Prototype: *size_t print_list(const list_t *h);
- Return: the number of nodes
- Format: see example
- If str is NULL, print [0] (nil)
- You are allowed to use printf
## [1. List length](1-list_len.c)
Write a function that returns the number of elements in a linked list_t list.
- Prototype: size_t list_len(const list_t *h);

