#ifndef LIBFT_H

# define LIBFT_H
# include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_bzero(void *dst, size_t len);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void *ft_memchr(const void *buf, int ch, size_t n);
int	ft_memcmp(const void *buf1, const void *buf2, size_t n);
void	*ft_memcpy(void *dst,const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *dst, int val, size_t len);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strcpy(char *dst, char *src);
size_t	ft_strlen(const char *str);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
// char *ft_substr(char const *s, unsigned int start, size_t len);


#endif