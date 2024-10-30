/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:54:37 by hbousset          #+#    #+#             */
/*   Updated: 2024/10/29 21:54:22 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

// Character Checking Functions
int	ft_isalpha(int c);     // Checks if c is an alphabetic character.
int	ft_isdigit(int c);     // Checks if c is a digit (0-9).
int	ft_isalnum(int c);     // Checks if c is alphanumeric (a letter or digit).
int	ft_isascii(int c);     // Checks if c is an ASCII character (0-127).
int	ft_isprint(int c);     // Checks if c is a printable character.

// Character Case Conversion Functions
int	ft_toupper(int c);     // Converts c to uppercase if it's lowercase.
int	ft_tolower(int c);     // Converts c to lowercase if it's uppercase.

// Memory Manipulation Functions
void	*ft_memset(void *s, int c, size_t n);    // Fills a memory block with the byte value c.
void	ft_bzero(void *s, size_t n);             // Sets n bytes of memory to zero.
void	*ft_memcpy(void *dest, const void *src, size_t n);    // Copies n bytes from src to dest.
void	*ft_memmove(void *dest, const void *src, size_t n);   // Copies n bytes with overlap handling.
void	*ft_memchr(const void *s, int c, size_t n);           // Searches for byte c in the first n bytes of memory block s.
int	ft_memcmp(const void *s1, const void *s2, size_t n);       // Compares the first n bytes of two memory blocks.

// Memory Allocation Functions
void	*ft_calloc(size_t nmemb, size_t size);   // Allocates memory and sets to zero.
char	*ft_itoa(int n);                         // Converts an integer to a string.

// String Manipulation Functions
size_t	ft_strlen(const char *s);                          // Returns the length of the string s.
int	ft_atoi(const char *str);                            // Converts a string to an integer.
int	ft_strncmp(const char *s1, const char *s2, size_t n); // Compares two strings up to n characters.
char	*ft_strnstr(const char *big, const char *little, size_t len);  // Finds a substring within a string up to len.
char	*ft_strchr(const char *s, int c);                  // Finds the first occurrence of char c in string s.
char	*ft_strrchr(const char *s, int c);                 // Finds the last occurrence of char c in string s.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);      // Copies a string to dst with size limit.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);      // Concatenates src to dst with size limit.
char	*ft_strdup(const char *s1);                        // Duplicates a string.
char	*ft_strjoin(char const *s1, char const *s2);       // Joins two strings.
char	*ft_substr(char const *s, unsigned int start, size_t len); // Extracts a substring from s.
char	*ft_strtrim(char const *s1, char const *set);      // Trims characters from set at the start and end of s1.

char	**ft_split(char const *s, char c);                 // Splits a string by delimiter.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));  // Applies a function to each character of a string.
void ft_striteri(char *s, void (*f)(unsigned int,char*)); //applies a given function f to each character of a string s


// File Descriptor Functions
void	ft_putchar_fd(char c, int fd);           // Writes a character to the given file descriptor.
void	ft_putstr_fd(char *s, int fd);           // Writes a string to the given file descriptor.
void	ft_putendl_fd(char *s, int fd);          // Writes a string followed by a newline to the given file descriptor.
void	ft_putnbr_fd(int n, int fd);             // Writes an integer to the given file descriptor.

// Linked List Functions
typedef struct s_list {
	void *content;
	struct s_list *next;
} t_list;

t_list	*ft_lstnew(void const *content);                         // Creates a new list element.
void	ft_lstadd_front(t_list **alst, t_list *new);             // Adds an element at the start of the list.
int	ft_lstsize(t_list *lst);                                     // Returns the number of elements in a list.
t_list	*ft_lstlast(t_list *lst);                               // Returns the last element of the list.
void	ft_lstadd_back(t_list **alst, t_list *new);              // Adds an element at the end of the list.
void	ft_lstdelone(t_list *lst, void (*del)(void*));           // Deletes an element.
void	ft_lstclear(t_list **lst, void (*del)(void*));           // Clears a list.
void	ft_lstiter(t_list *lst, void (*f)(void *));              // Iterates over a list, applying a function to each element.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); // Maps a function to each element, creating a new list.

#endif
