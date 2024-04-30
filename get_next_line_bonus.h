/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:42:02 by bmilford          #+#    #+#             */
/*   Updated: 2024/04/30 18:16:21 by bmilford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 21
# endif

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char		*get_next_line(int fd);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strchr( const char *s, int c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
char		*read_nstash(int fd, char *buffy, char *stash);
char		*extract_line(char *newline);

#endif
