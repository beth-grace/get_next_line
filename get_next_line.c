/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmilford <bmilford@student.42adel.o>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:34:45 by bmilford          #+#    #+#             */
/*   Updated: 2024/03/26 00:06:46 by beefie           ###   ########.fr       */
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
		o nahwhile (buf[index] != '\0')
		{
			if (index == len)
				buf = malloc(BUFFER_SIZE + index) * (sizeof(int));
			index++;
		}
	}
}

void	read_nstash()
{
	// add content of buffer to the end of the stash
}

void	add_tostash()
{
	//extracts all characters from the stash and stores them in 'line'
	//stops when encouters the '\n'
}

void	extract_line()
{
	//clears stash so only not returned characters are left
}

void	clean_stash()
{
	//self explanitory, free()
}
