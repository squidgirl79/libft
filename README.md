*This project has been created as part of the 42 curriculum by embrugge.*

# Libft

**Description**

The aim of this project was to learn about the basics of C, pointers and memory
management, Makefile, and headers.
Libft contains 43 functions, ranging from replicating standard libc functions,
to more advanced functions, used to manipulate Linked lists.

**Instructions**

To build the library, execute any of the following:
> `make`  
> `make all`  
> `make libft.a`  

To remove the object files, run:
> `make clean`

If you also wish to remove the libft.a archive, run:
> `make fclean`

To remove and recompile everything, run:
> `make re`

**Details**

Libft consists of 23 standard libc functions, replicating their original behaviour.
These functions are:
> `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_strlen` `ft_memset` `ft_bzero`  
> `ft_memcpy` `ft_memmove` `ft_strlcpy` `ft_strlcat` `ft_toupper` `ft_tolower` `ft_strchr`  
> `ft_strrchr` `ft_strncmp` `ft_memchr` `ft_memcmp` `ft_strnstr` `ft_atoi` `ft_calloc` `ft_strdup`  

For more information on these functions, run `man <name of function>` in your terminal.

Additionally, Libft contains 11 functions that are not included in the standard libc.
These are:

> `char *ft_substr(char const *s, unsigned int start, size_t len);`  
>
> Allocates memory and returns a substring from a given string,
> starting from the given index with a given maximum length.
>
> Parameters:
> - s: The original string to create the substring from.
> - start: The starting index of the substring.
> - len: The maximum length of the substring.  
>
> Returns a pointer to the new substring, or NULL on allocation failure.

> `char *ft_strjoin(char const *s1, char const *s2);`
>
> Allocates memory, joins the two given strings and returns the result.
>
> Parameters:
> - s1: The first string.
> - s2: The second string.
>
> Returns a pointer to the new joined string, or NULL on allocation failure.

> `char *ft_strtrim(char const *s1, char const *set);`
>
> Allocates memory and returns a copy of the given string with the characters from a given set
> being taken out of the start and end of the string.
>
> Parameters:
> - s1: The string to trim.
> - set: The characters to be removed.
>
> Returns a pointer to the trimmed string, or NULL on allocation failure.

> `char **ft_split(char const *s, char c);`
>
> Allocates memory and returns an array of strings, split from the given string.
>
> Parameters:
> - s: The string to be split.
> - c: The delimiting character to split at.
>
> Returns a pointer to the array of splitted strings, NULL on allocation failure.

> `char *ft_itoa(int n);`

> `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`

> `void ft_striteri(char *s, void (*f)(unsigned int, char*));`

> `void ft_putchar_fd(char c, int fd);`

> `void ft_putstr_fd(char *s, int fd);`

> `void ft_putendl_fd(char *s, int fd);`

> `void ft_putnbr_fd(int n, int fd);`

Lastly, Libft has 9 functions used to manipulate Linked lists.
A linked list node is defined as:
`typedef struct     s_list    `
`{                            `
`   void            *content; `
`   struct s_list   *next;    `
`}                  t_list;   `
Where `content` is a pointer to the data contained in the node.
And `next` is a pointer to the next node in the list, or NULL if this is the last node.

The Linked list functions are as follows:

> `t_list *ft_lstnew(void *content);`

> `void ft_lstadd_front(t_list **lst, t_list *new);`

> `int ft_lstsize(t_list *lst);`

> `t_list *ft_lstlast(t_list *lst);`

> `void ft_lstadd_back(t_list **lst, t_list *new);`

> `void ft_lstdelone(t_list *lst, void (*del)(void*));`

> `void ft_lstclear(t_list **lst, void (*del)(void*));`

> `void ft_lstiter(t_list *lst, void (*f)(void *));`

> `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`

**Resources**

The official man pages were used when replicating the standard libc functions.
[w3schools](https://www.w3schools.com) and [geeksforgeeks](https://www.geeksforgeeks.org) were my main sources
of information for this project.
Of course, I couldn't have done this without my peers at Codam.

No AI was used in this project.
