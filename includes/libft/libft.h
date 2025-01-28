/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:06:41 by mcaro-ro          #+#    #+#             */
/*   Updated: 2024/12/17 00:18:14 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//Converts a lower-case letter to the corresponding upper-case letter.
int		ft_toupper(int c);

//Converts a upper-case letter to the corresponding lower-case letter.
int		ft_tolower(int c);

//Test for any character for wich isupper or islower is true.
int		ft_isalpha(int c);

//Test if c is a 7-bit unsigned char value that fits into the ASCII table.
int		ft_isascii(int c);

//Test for a decimal digit character.
int		ft_isdigit(int c);

//Test for any character for wich isalpha or isdigit is true.
int		ft_isalnum(int c);

//Tests for any printing character.
int		ft_isprint(int c);

//Computes the length of the string s.
int		ft_strlen(const char *s);

//Locates the first occurrence of c converted to char in the string pointer s.
char	*ft_strchr(const char *s, int c);

//Identical to ft_strchr(), except it locates the last occurrence of c.
char	*ft_strrchr(const char *s, int c);

//Copy string with the same inout parameters.
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size);

//Compares n bytes of strings s1 and s2.
int		ft_strncmp(const char *s1, const char *s2, size_t n);

//Concatenate strings with the same input parameters.
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size);

//Locates the first len occurrence of the string needle in the string haystack.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

//Converts the initial portion of the string str to int representation.
int		ft_atoi(const char *str);

//Converts the int 'n' to string representation.
char	*ft_itoa(int n);

//The function writes n bytes to 0 to the string s.
void	ft_bzero(void *s, size_t n);

//Writes len bytes of value c converted to unsigned char to string b.
void	*ft_memset(void *b, int c, size_t len);

//Copies n bytes from src to memory area dst. Overlap behavior is undefined.
void	*ft_memcpy(void *dst, const void *src, size_t n);

//Copies len bytes from string src to string dst. The two strings may overlap.
void	*ft_memmove(void *dst, const void *src, size_t len);

//Locate the first occurrence of c converted to unsigned char in string s.
void	*ft_memchr(const void *s, int c, size_t n);

//Compares byte s1 agains byte s2. Both strings are assumed to be n bytes long.
int		ft_memcmp(const void *s1, const void *s2, size_t n);

//Allocates memory seted to zero and returns a pointer to the allocated memory.
void	*ft_calloc(size_t count, size_t size);

//Returns a pointer to a new string which is a duplicate of s1.
char	*ft_strdup(const char *s1);

//Returns a substring from s since index 'start', with a max leng of 'len'.
char	*ft_substr(char const *s, unsigned int start, size_t len);

//Concatenate s1 and s2 in a new string.
char	*ft_strjoin(char const *s1, char const *s2);

//Remove all characters from 'set' at the beginnning and end of 's1'.
char	*ft_strtrim(char const *s1, char const *set);

//Split 's' into substrings delimited by 'c'.
char	**ft_split(char const *s, char c);

//Free the memory alocated by ft_split
void	ft_free_split(char **arr);

//Returns a string of applying the function 'f' to each character of 's'.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

//Apply the function 'f' to each character of 's'.
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

//Send the characte 'c' to the file descriptor 'fd'.
void	ft_putchar_fd(char c, int fd);

//Send the string 's' to the file descriptor 'fd'.
void	ft_putstr_fd(char *s, int fd);

//Same as ft_putstr_fd followed by a new line.
void	ft_putendl_fd(char *s, int fd);

//Send number 'n' to the file descriptor 'fd'.
void	ft_putnbr_fd(int n, int fd);

//Bonus Part
//Create a new node and set the content of it to 'content' and next to null.
t_list	*ft_lstnew(void *content);

//Adds the node 'new' to the beginning of the list.
void	ft_lstadd_front(t_list **lst, t_list *new);

//Adds the node 'new' to the end of the list 'lst'.
void	ft_lstadd_back(t_list **lst, t_list *new);

//Return the len of the list 'lst'.
int		ft_lstsize(t_list *lst);

//Return the last node of the list 'lst'.
t_list	*ft_lstlast(t_list *lst);

//Free the memory of the content of 'lst' with 'del'.
void	ft_lstdelone(t_list *lst, void (*del)(void *));

//Free the node of 'lst' and all consecutive nodes with 'del'.
void	ft_lstclear(t_list **lst, void (*del)(void *));

//Iterate 'lst' and apply 'f' to the content of each node.
void	ft_lstiter(t_list *lst, void (*f)(void *));

//Return a new list of the result of aplly 'f' to each node content of 'lst'.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
