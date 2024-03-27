/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:34:45 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/27 18:12:49 by bmilford         ###   ########.fr       */
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
	while
	{
		buffy = malloc(BUFFER_SIZE + 1) * (sizeof(int));
		size = read (fd, buffy, BUFFER_SIZE);
		while (buf[index] != '\0')
		{
			if (index == len)
				buf = malloc(BUFFER_SIZE + index) * (sizeof(int));
			index++;
		}
	}
}

// add content of buffer to the end of the stash
void	read_nstash(char *stash, char *buffy)
{
	size_t	index;
	size_t	add;

	index = 0;
	add = 0;
	size = read(fd, buffy, BUFFER_SIZE);
	while (stash)
		index++;
	while (buffy)
	{
		stash[index] = buffy[add];
		index++;
		add;
	}
}

	//extracts all characters from the stash and stores them in 'line'
	//stops when it reads a '\n'
void	add_tostash()
{

}

void	extract_line()
{
	//clears stash so only not returned characters are left
}

void	clean_stash()
{
	//self explanitory, free()
}
