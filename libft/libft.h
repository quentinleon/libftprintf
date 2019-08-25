/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qleon <qleon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:51:09 by qleon             #+#    #+#             */
/*   Updated: 2019/08/25 12:23:36 by qleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

# define TRUE = 0
# define FALSE = 0
# define RET_IF(I,R) if(I){return(R);}

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *ptr, int value, size_t num);
void				ft_bzero(void *ptr, size_t num);
void				*ft_memcpy(void *dest, const void *src, size_t num);
void				*ft_memccpy(void *dest, const void *src, int c, size_t num);
void				*ft_memmove(void *dest, const void *src, size_t num);
void				*ft_memchr(const void *ptr, int value, size_t num);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t num);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t num);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *str1, const char *str2);
char				*ft_strnstr(const char *str1, const char *str2, size_t len);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_strncmp(const char *str1, const char *str2, size_t num);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ptr);
char				*ft_strnew(size_t size);
void				ft_strdel(char **str);
void				ft_strclr(char *str);
void				ft_striter(char *str, void (*f)(char *));
void				ft_striteri(char *str, void (*f)(unsigned int, char *));
char				*ft_strmap(char *str, char (*f)(char));
char				*ft_strmapi(char *str, char (*f)(unsigned int, char));
int					ft_strequ(const char *str1, const char *str2);
int					ft_strnequ(const char *str1, const char *str2, size_t num);
char				*ft_strsub(const char *str, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(const char *str);
char				**ft_strsplit(const char *str, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(const char *str);
void				ft_putendl(const char *str);
void				ft_putnbr(int num);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *str, int fd);
void				ft_putendl_fd(const char *str, int fd);
void				ft_putnbr_fd(int num, int fd);

t_list				*ft_lstnew(const void *content, size_t content_size);
void				ft_lstdelone(t_list	**node, void (*del)(void *, size_t));
void				ft_lstdel(t_list **head, void (*del)(void *, size_t));
void				ft_lstadd(t_list **head, t_list *new_elem);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

int					ft_isspace(char c);
int					ft_wordcount(const char *str);
int					ft_abs(int n);
void				ft_strtolower(char *str);
void				ft_strtoupper(char *str);
int					ft_strcmp_ci(const char *str1, const char *str2);

#endif
