/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <micheli@student.21-school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:35:02 by mmicheli          #+#    #+#             */
/*   Updated: 2021/11/25 16:40:59 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

size_t	ft_strlen(const char *s);
char	*ft_strcat(char *dest, char *src);
char	*ft_strmaker(t_list **list);
int		ft_lstsize(t_list *list);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_checkbuf(t_list **list, char *buf, int *place);
void	ft_lstadd_back(t_list **lst, char *new);
char	*get_next_line(int fd);

#endif