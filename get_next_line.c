/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:34:45 by bmilford          #+#    #+#             */
/*   Updated: 2024/04/30 01:38:14 by beefie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			index
	static char	*stash
	char		*buffy
	int			size;
	char		*newline;

	index = 0;
	if (BUFFER_SIZE <= 0)
		return (0);
	buffy = (char *)malloc(BUFFER_SIZE + 1) * (sizeof(char));
	if (!buffy)
		return (0);
	newline = read_nstash(fd, buffy, stash);
	stash = extract_line(newline);
	free (buffy)
	buffy = NULL;
	return (newline);
}


// add content of buffer to the end of the stash
static char	read_nstash(int fd, char *buffy, char *stash)
{
	size_t	index;
	char	hold_temp;

	index = 0;
	while (index != '\0')
	{
		index = read(fd, buffy, BUFFER_SIZE);
		if (index == 0) 
			return (0);
		buffy[index] = '\0';
		if(!stash)
			stash = ft_strdup("")/*??*/;
		hold_temp = stash;
		stash = ft_strjoin(hold_temp, buffy);
		free(hold_temp);
		hold_temp = NULL;
		if (ft_strchr(buffy, '\n'))
			break ;
	}
	return (stash);
}

static char	*extract_line(char *newline)
{
	size_t	index;
	char	*stash;

	index = 0;
	while (newline[index] != '\n' && newline[index] != '\0')
		index++;
	stash = ft_substr(newline, index + 1, ft_strlen(newline) - index);
	if (!stash)
		return (0);
	line[index + 1] = '\0';
	return (stash);

}

