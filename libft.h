#ifndef LIBFT_H
# define LIBFT_H

void bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void * memchr( const void * memoryBlock, int searchedChar, size_t size );
char *strchr(const char *string, int searchedChar);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int ft_strlen(char *str);
int strncmp(const char *first, char * second, size_t length);
char *strrchr(const char *string, int searchedChar);
int ft_lower(int c);
int ft_toupper(int c);
void *memset (void *s, int c, size_t n);

#endif